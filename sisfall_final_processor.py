import os
import csv
import pandas as pd
import numpy as np

# =============================================================================
# 1. CONFIGURATION
# =============================================================================
BASE_PATH = "/Users/vedaswarupbhushan/documents/projects/tbp/SisFall_dataset"
OUTPUT_FILE = "sisfall_3class_final.csv"

# Sliding Window Parameters
WINDOW_SIZE = 80        # 400ms at 200Hz — ideal for MPU6050 capture
STEP_SIZE   = 40        # 50% overlap for better training density

# Fall Detection Threshold
IMPACT_THRESHOLD = 3.0  # G-force threshold for a fall impact

# SisFall Readme Constants for Unit Conversion
ACC_RES   = 13;  ACC_RANGE   = 16      # ADXL345 accelerometer
GYRO_RES  = 16;  GYRO_RANGE  = 2000   # ITG-3200 gyroscope

# Precomputed conversion factors  (bits → G  and  bits → deg/s)
ACC_FACTOR  = (2 * ACC_RANGE)  / (2 ** ACC_RES)
GYRO_FACTOR = (2 * GYRO_RANGE) / (2 ** GYRO_RES)

# SisFall subject folders all start with 'SA' or 'SE'; fall files start with 'F'
# ADL  files start with 'D'
FALL_FILE_PREFIXES = ('F',)   # extend if needed, e.g. ('F', 'FW')
ADL_FILE_PREFIX    = 'D'


# =============================================================================
# 2. DELIMITER DETECTION  (sniff once per folder, reuse for all files in it)
# =============================================================================
def detect_sep(filepath: str) -> str:
    """
    Reads only the first line of a file and sniffs the delimiter.
    Falls back to ';' which is the most common SisFall delimiter.
    Much faster than letting Pandas sniff the entire file (sep=None).
    """
    try:
        with open(filepath, 'r', errors='replace') as f:
            first_line = f.readline()
        return csv.Sniffer().sniff(first_line, delimiters=';, \t').delimiter
    except csv.Error:
        return ';'   # SisFall default fallback


# =============================================================================
# 3. UNIT CONVERSION
# =============================================================================
def convert_to_physical_units(raw: np.ndarray) -> np.ndarray:
    """
    Converts raw ADC bits → G-force (cols 0-2) and deg/s (cols 3-5).
    Returns a NEW array — no in-place mutation of the original data.

    Formula from SisFall Readme:
        physical = [(2 × Range) / (2^Resolution)] × raw_value
    """
    result = raw.astype(float, copy=True)
    result[:, :3] *= ACC_FACTOR
    result[:, 3:6] *= GYRO_FACTOR
    return result


# =============================================================================
# 4. VECTORISED SLIDING WINDOW
# =============================================================================
def sliding_windows(data: np.ndarray, size: int, step: int) -> np.ndarray:
    """
    Creates all windows in one shot using NumPy stride tricks — no Python loop.

    Returns shape: (N_windows, size, n_cols)
    Memory note: stride_tricks creates a VIEW, not a copy, so it is fast and
    memory-efficient. Be careful not to write back into it.
    """
    n_windows = (len(data) - size) // step
    if n_windows <= 0:
        return np.empty((0, size, data.shape[1]))

    shape   = (n_windows, size, data.shape[1])
    strides = (data.strides[0] * step,) + data.strides
    return np.lib.stride_tricks.as_strided(data, shape=shape, strides=strides)


# =============================================================================
# 5. VECTORISED FEATURE EXTRACTION  (all windows in one NumPy call)
# =============================================================================
def extract_features_batch(windows: np.ndarray) -> np.ndarray:
    """
    Extracts 9 MPU6050-compatible features for every window simultaneously.

    Input  shape : (N, WINDOW_SIZE, 6)
    Output shape : (N, 9)

    Features
    --------
    svm_avg   – mean acceleration magnitude (Signal Vector Magnitude)
    svm_max   – peak acceleration magnitude  (impact detection)
    svm_min   – minimum SVM
    svm_std   – SVM standard deviation       (activity variability)
    gyro_avg  – mean rotation magnitude
    gyro_max  – peak rotation magnitude
    tilt_avg  – mean tilt angle relative to gravity
    tilt_range– max−min tilt                 (postural change)
    snr       – signal-to-noise ratio (svm_avg / svm_std)
    """
    accel = windows[:, :, :3]    # shape (N, W, 3)
    gyro  = windows[:, :, 3:6]   # shape (N, W, 3)

    # --- Magnitudes ---
    svm  = np.sqrt(np.sum(accel ** 2, axis=2))   # (N, W)
    gvm  = np.sqrt(np.sum(gyro  ** 2, axis=2))   # (N, W)

    # --- Tilt angle (deg) relative to gravity vector ---
    tilt = np.degrees(
        np.arctan2(
            np.sqrt(accel[:, :, 0] ** 2 + accel[:, :, 1] ** 2),
            accel[:, :, 2]
        )
    )   # (N, W)

    svm_mean = np.mean(svm, axis=1)
    svm_std  = np.std(svm,  axis=1)

    # Avoid division by zero for SNR
    snr = np.where(svm_std != 0, svm_mean / svm_std, 0.0)

    return np.column_stack([
        svm_mean,                                   # svm_avg
        np.max(svm,  axis=1),                       # svm_max
        np.min(svm,  axis=1),                       # svm_min
        svm_std,                                    # svm_std
        np.mean(gvm, axis=1),                       # gyro_avg
        np.max(gvm,  axis=1),                       # gyro_max
        np.mean(tilt, axis=1),                      # tilt_avg
        np.max(tilt,  axis=1) - np.min(tilt, axis=1),  # tilt_range
        snr,                                        # snr
    ])


# =============================================================================
# 6. VECTORISED 3-CLASS LABELING
# =============================================================================
def label_windows(windows: np.ndarray, is_fall_file: bool) -> np.ndarray:
    """
    Assigns one of three labels to each window using look-ahead logic.

    Label 0 – ADL      : normal daily-living activity
    Label 1 – Pre-Fall : motion just BEFORE a fall impact
    Label 2 – Fall     : window containing the actual impact

    Logic
    -----
    - All windows from files starting with 'D' → label 0 (ADL)
    - For fall files:
        * If curr window SVM_max > threshold           → label 2 (Fall)
        * Elif NEXT window SVM_max > threshold         → label 1 (Pre-Fall)
        * Else                                         → label 0 (pre-stumble / ADL)

    Note: The last window has no look-ahead partner and is excluded
          (caller passes windows[:-1] for features and windows here).
    """
    n = len(windows) - 1   # number of (curr, next) pairs

    if not is_fall_file or n <= 0:
        return np.zeros(n, dtype=np.int8)

    accel   = windows[:, :, :3]
    svm_max = np.max(np.sqrt(np.sum(accel ** 2, axis=2)), axis=1)  # (N,)

    curr_max = svm_max[:-1]   # windows 0 … N-2
    next_max = svm_max[1:]    # windows 1 … N-1  (look-ahead)

    labels = np.zeros(n, dtype=np.int8)
    labels[next_max > IMPACT_THRESHOLD] = 1   # Pre-Fall
    labels[curr_max > IMPACT_THRESHOLD] = 2   # Fall (overrides Pre-Fall if both)

    return labels


# =============================================================================
# 7. COLUMN DETECTION  (handles leading metadata columns in some versions)
# =============================================================================
def detect_usecols(filepath: str, sep: str) -> list:
    """
    Reads the first data row to count total columns.
    SisFall Readme defines:
        Col 1-3  : ADXL345 accelerometer  (x, y, z)
        Col 4-6  : ITG-3200 gyroscope     (x, y, z)
        Col 7-9  : MMA8451Q accelerometer (discarded — not on MPU6050)

    Some semicolon-delimited releases prepend a leading index/timestamp column
    that shifts everything by 1.  This function auto-detects that shift.
    """
    try:
        row = pd.read_csv(filepath, header=None, sep=sep,
                          engine='c', nrows=1).values[0]
        n_cols = len(row)
        if n_cols >= 9:
            # Standard layout: take columns 0-5
            return list(range(6))
        elif n_cols >= 6:
            return list(range(6))
        else:
            # Fallback — take whatever is there
            return list(range(n_cols))
    except Exception:
        return list(range(6))


# =============================================================================
# 8. MAIN PROCESSING LOOP
# =============================================================================
def main():
    all_features: list[np.ndarray] = []
    all_labels:   list[np.ndarray] = []

    sep_cache     = {}   # root → delimiter  (one sniff per folder)
    usecols_cache = {}   # root → usecols    (one probe per folder)

    file_count  = 0
    skip_count  = 0

    print("=" * 60)
    print("  SisFall 3-Class Feature Extractor")
    print("=" * 60)
    print(f"  Base path     : {BASE_PATH}")
    print(f"  Window size   : {WINDOW_SIZE} samples  ({WINDOW_SIZE/200*1000:.0f} ms @ 200 Hz)")
    print(f"  Step size     : {STEP_SIZE} samples  (overlap {100*(1-STEP_SIZE/WINDOW_SIZE):.0f}%)")
    print(f"  Impact thresh : {IMPACT_THRESHOLD} G")
    print("=" * 60)

    for root, _, files in os.walk(BASE_PATH):
        txt_files = sorted(
            f for f in files
            if f.endswith(".txt") and not f.startswith(".")
        )
        if not txt_files:
            continue

        # --- Detect delimiter once per folder ---
        if root not in sep_cache:
            sample_path = os.path.join(root, txt_files[0])
            sep_cache[root]     = detect_sep(sample_path)
            usecols_cache[root] = detect_usecols(sample_path, sep_cache[root])
            print(f"\n[Folder] {os.path.relpath(root, BASE_PATH)}"
                  f"  |  sep={repr(sep_cache[root])}"
                  f"  |  usecols={usecols_cache[root]}")

        sep     = sep_cache[root]
        usecols = usecols_cache[root]

        for file in txt_files:
            file_path    = os.path.join(root, file)
            is_fall_file = file.startswith(FALL_FILE_PREFIXES)

            try:
                # --- Load raw sensor data ---
                raw = pd.read_csv(
                    file_path,
                    header=None,
                    sep=sep,
                    engine='c',          # Fast C engine (sep is now explicit)
                    usecols=usecols,
                ).values

                if raw.shape[1] < 6:
                    print(f"  [WARN] {file} has only {raw.shape[1]} cols — skipping")
                    skip_count += 1
                    continue

                # Ensure exactly 6 columns (drop extras silently)
                raw = raw[:, :6]

                # --- Convert bits → physical units ---
                data = convert_to_physical_units(raw)

                # --- Build all windows at once ---
                windows = sliding_windows(data, WINDOW_SIZE, STEP_SIZE)

                # Need at least 2 windows for look-ahead labeling
                if len(windows) < 2:
                    skip_count += 1
                    continue

                # --- Feature extraction (all windows except last) ---
                features = extract_features_batch(windows[:-1])

                # --- 3-class labeling ---
                labels = label_windows(windows, is_fall_file=is_fall_file)

                all_features.append(features)
                all_labels.append(labels)
                file_count += 1

            except Exception as e:
                print(f"  [ERROR] Skipping {file}: {e}")
                skip_count += 1

    # =========================================================================
    # 9. ASSEMBLE & SAVE
    # =========================================================================
    if not all_features:
        print("\n[FATAL] No data extracted. Check BASE_PATH and file formats.")
        return

    features_arr = np.vstack(all_features)
    labels_arr   = np.concatenate(all_labels).astype(int)

    columns = [
        'svm_avg', 'svm_max', 'svm_min', 'svm_std',
        'gyro_avg', 'gyro_max',
        'tilt_avg', 'tilt_range',
        'snr',
        'label'
    ]

    df = pd.DataFrame(
        np.column_stack([features_arr, labels_arr]),
        columns=columns
    )
    df['label'] = df['label'].astype(int)
    df.to_csv(OUTPUT_FILE, index=False)

    # =========================================================================
    # 10. SUMMARY REPORT
    # =========================================================================
    print("\n" + "=" * 60)
    print("  EXTRACTION COMPLETE")
    print("=" * 60)
    print(f"  Files processed : {file_count}")
    print(f"  Files skipped   : {skip_count}")
    print(f"  Output file     : {OUTPUT_FILE}")
    print(f"  Dataset shape   : {df.shape[0]:,} rows × {df.shape[1]} cols")
    print()
    print("  Class Distribution:")
    counts = df['label'].value_counts().sort_index()
    label_names = {0: "ADL (Normal)", 1: "Pre-Fall (Alert)", 2: "Fall (Impact)"}
    total = len(df)
    for lbl, cnt in counts.items():
        bar = "█" * int(40 * cnt / total)
        print(f"    Class {lbl} [{label_names.get(lbl, '?'):16s}] "
              f"{cnt:6,}  ({100*cnt/total:5.1f}%)  {bar}")
    print("=" * 60)


if __name__ == "__main__":
    main()