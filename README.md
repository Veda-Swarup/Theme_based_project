# SisFall 3-Class Fall Detection (XGBoost)

This project builds a 3-class fall detection model from the SisFall dataset:

- `0` = ADL (normal daily activity)
- `1` = Pre-Fall (early warning window before impact)
- `2` = Fall (impact window)

The pipeline has two stages:

1. Feature extraction from raw SisFall `.txt` sensor files.
2. Model training using XGBoost with scaling and SMOTE.

## Project Structure

- `sisfall_final_processor.py` - Converts raw SisFall files into a labeled feature CSV.
- `train_fall_model.py` - Trains and evaluates a 3-class XGBoost model.
- `sisfall_3class_final.csv` - Generated feature dataset used for training.
- `fall_detection_model.json` - Trained XGBoost model artifact.
- `fall_detection_scaler.pkl` - Trained `StandardScaler` artifact.
- `SisFall_dataset/` - Raw dataset folders (`SAxx`, `SExx`) and text files.

## Requirements

Use Python 3.9+.

Install dependencies:

```bash
pip install numpy pandas scikit-learn xgboost imbalanced-learn matplotlib joblib
```

## 1) Build the Training Dataset

Run:

```bash
python3 sisfall_final_processor.py
```

What it does:

- Walks through `SisFall_dataset/` files.
- Detects delimiters and reads sensor columns.
- Converts raw ADC values to physical units (G and deg/s).
- Creates sliding windows (`WINDOW_SIZE=80`, `STEP_SIZE=40`).
- Extracts 9 engineered features per window:
  - `svm_avg`, `svm_max`, `svm_min`, `svm_std`
  - `gyro_avg`, `gyro_max`
  - `tilt_avg`, `tilt_range`
  - `snr`
- Applies 3-class labeling logic using impact threshold (`IMPACT_THRESHOLD=3.0`).
- Saves `sisfall_3class_final.csv`.

## 2) Train the Model

Run:

```bash
python3 train_fall_model.py
```

Training pipeline:

- `StandardScaler` -> `SMOTE` -> `XGBClassifier`

Evaluation outputs:

- Classification report
- Confusion matrix
- Pre-Fall threshold analysis
- Feature importance ranking

Saved artifacts:

- `fall_detection_model.json`
- `fall_detection_scaler.pkl`

## Inference Notes

Load and apply artifacts in this order:

1. Load scaler.
2. Scale incoming feature vectors.
3. Load model and run `predict_proba`.
4. Use either argmax class or a custom probability threshold for Pre-Fall alerts.

Minimal flow:

```python
import joblib
import numpy as np
from xgboost import XGBClassifier

scaler = joblib.load("fall_detection_scaler.pkl")
model = XGBClassifier()
model.load_model("fall_detection_model.json")

# features shape: (n_samples, 9)
X = scaler.transform(features)
proba = model.predict_proba(X)
label = np.argmax(proba, axis=1)
```

## Configuration

In `sisfall_final_processor.py`, check these values before running:

- `BASE_PATH` points to your local `SisFall_dataset` directory.
- `WINDOW_SIZE`, `STEP_SIZE`, `IMPACT_THRESHOLD` for your desired sensitivity.

If your local folder path differs, update `BASE_PATH` accordingly.

## Common Issues

- File not found:
  - Verify `BASE_PATH` and dataset location.
- Import errors (`xgboost`, `imblearn`, etc.):
  - Re-run the dependency install command.
- Very poor Pre-Fall recall:
  - Tune `IMPACT_THRESHOLD` and class decision thresholds from model probability output.

## License and Data

- The SisFall dataset belongs to its original authors/distributors.
- Check dataset terms in `SisFall_dataset/Readme.txt` before redistribution or commercial use.
