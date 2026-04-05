import numpy as np
import pandas as pd
from xgboost import XGBClassifier
from sklearn.model_selection import train_test_split, StratifiedGroupKFold, cross_val_score
from sklearn.preprocessing import StandardScaler
from sklearn.pipeline import Pipeline
from sklearn.metrics import classification_report, confusion_matrix, ConfusionMatrixDisplay
from imblearn.over_sampling import SMOTE
from imblearn.pipeline import Pipeline as ImbPipeline
import matplotlib.pyplot as plt
import warnings
warnings.filterwarnings('ignore')

# =============================================================================
# 1. LOAD DATA
# =============================================================================
df = pd.read_csv("sisfall_3class_final.csv")

print("=" * 60)
print("  SisFall Fall Detector — XGBoost Training")
print("=" * 60)
print(f"\nDataset shape : {df.shape}")
print("\nRaw class distribution:")
counts = df['label'].value_counts().sort_index()
label_names = {0: "ADL", 1: "Pre-Fall", 2: "Fall"}
for lbl, cnt in counts.items():
    print(f"  Class {lbl} ({label_names[lbl]:8s}): {cnt:6,}  ({100*cnt/len(df):.1f}%)")


# =============================================================================
# 2. FEATURES & LABELS
# =============================================================================
X = df.drop('label', axis=1).values
y = df['label'].values

# NOTE: If you have a subject_id column, add it to your CSV and use it here
# for StratifiedGroupKFold. Without it, we use a standard stratified split.
# groups = df['subject_id'].values  ← uncomment if available


# =============================================================================
# 3. TRAIN / TEST SPLIT
# =============================================================================
# stratify=y ensures Pre-Fall (rare class) is represented in both sets
X_train, X_test, y_train, y_test = train_test_split(
    X, y,
    test_size=0.2,
    random_state=42,
    stratify=y      # Crucial — preserves class ratios
)

print(f"\nTrain size: {len(X_train):,}  |  Test size: {len(X_test):,}")


# =============================================================================
# 4. PIPELINE: Scale → SMOTE → XGBoost
#
# KEY FIX 1: StandardScaler BEFORE SMOTE
#   SMOTE interpolates between neighbours. Without scaling, tilt_range (0–180°)
#   dominates distance calculations and svm_avg (0–5G) is ignored entirely.
#   Scaled features → realistic synthetic Pre-Fall samples.
#
# KEY FIX 2: Use ImbPipeline (from imblearn), not sklearn Pipeline
#   imblearn's Pipeline applies SMOTE only during fit(), not transform().
#   This ensures SMOTE never touches the test set — no data leakage.
#
# KEY FIX 3: multi:softprob instead of multi:softmax
#   softprob returns class probabilities, enabling predict_proba().
#   You'll need this for adjustable alert thresholds in deployment.
#   predict() still returns the argmax class — no change in interface.
# =============================================================================
pipeline = ImbPipeline(steps=[
    ('scaler', StandardScaler()),
    ('smote',  SMOTE(random_state=42, k_neighbors=5)),
    ('model',  XGBClassifier(
        n_estimators=200,
        max_depth=5,
        learning_rate=0.08,
        subsample=0.85,
        colsample_bytree=0.8,
        objective='multi:softprob',   # FIX: enables predict_proba()
        num_class=3,
        eval_metric='mlogloss',
        use_label_encoder=False,
        random_state=42,
        n_jobs=-1
    ))
])


# =============================================================================
# 5. TRAIN
# =============================================================================
print("\nTraining pipeline (Scale → SMOTE → XGBoost)...")
pipeline.fit(X_train, y_train)
print("Done.")


# =============================================================================
# 6. EVALUATE
# =============================================================================
y_pred      = pipeline.predict(X_test)
y_pred_proba = pipeline.predict_proba(X_test)

print("\n--- Classification Report ---")
print(classification_report(
    y_test, y_pred,
    target_names=['ADL (0)', 'Pre-Fall (1)', 'Fall (2)'],
    digits=3
))

# KEY FIX 4: Print the confusion matrix you imported but never used.
# For a fall detector, the critical failure is Class 1 predicted as Class 0
# (a Pre-Fall silently labelled ADL). This is invisible in F1 scores alone.
cm = confusion_matrix(y_test, y_pred)
print("--- Confusion Matrix ---")
print("Rows = Actual, Cols = Predicted")
print(f"{'':12s} {'ADL':>8s} {'Pre-Fall':>10s} {'Fall':>8s}")
for i, row_name in enumerate(['ADL', 'Pre-Fall', 'Fall']):
    row = cm[i]
    flags = []
    if i == 1 and row[0] > 0:
        flags.append(f"  ← {row[0]} Pre-Falls called ADL (MISSED ALERTS)")
    if i == 2 and row[0] > 0:
        flags.append(f"  ← {row[0]} Falls called ADL (CRITICAL MISS)")
    print(f"  {row_name:10s} {row[0]:>8d} {row[1]:>10d} {row[2]:>8d}{''.join(flags)}")

# Alert threshold analysis for Pre-Fall detection
print("\n--- Pre-Fall Alert Threshold Analysis ---")
print("Adjust threshold to trade false alarms for missed alerts:")
pre_fall_proba = y_pred_proba[:, 1]   # P(Pre-Fall) for each test sample
thresholds = [0.3, 0.4, 0.5, 0.6, 0.7]
actual_prefall = (y_test == 1)

print(f"  {'Threshold':>10s}  {'Recall (Pre-Fall)':>18s}  {'False Alarms/1000':>20s}")
for t in thresholds:
    predicted_prefall = pre_fall_proba >= t
    tp = (predicted_prefall & actual_prefall).sum()
    fn = (~predicted_prefall & actual_prefall).sum()
    fp = (predicted_prefall & ~actual_prefall).sum()
    recall = tp / (tp + fn) if (tp + fn) > 0 else 0
    false_alarm_rate = fp / len(y_test) * 1000
    print(f"  {t:>10.1f}  {recall:>18.1%}  {false_alarm_rate:>20.1f}")


# =============================================================================
# 7. FEATURE IMPORTANCE
# =============================================================================
model = pipeline.named_steps['model']
feature_names = list(df.drop('label', axis=1).columns)
importances   = model.feature_importances_

print("\n--- Feature Importance (XGBoost gain) ---")
sorted_idx = np.argsort(importances)[::-1]
for idx in sorted_idx:
    bar = "█" * int(importances[idx] * 200)
    print(f"  {feature_names[idx]:12s}  {importances[idx]:.4f}  {bar}")


# =============================================================================
# 8. SAVE MODEL
#
# Save scaler separately — you must apply it at inference time on the device
# before passing features to the XGBoost model.
# =============================================================================
import joblib

model.save_model("fall_detection_model.json")
joblib.dump(pipeline.named_steps['scaler'], "fall_detection_scaler.pkl")

print("\n--- Saved Files ---")
print("  fall_detection_model.json   ← XGBoost model (deploy this)")
print("  fall_detection_scaler.pkl   ← StandardScaler (apply BEFORE model at inference)")
print("\nInference usage:")
print("  scaler = joblib.load('fall_detection_scaler.pkl')")
print("  model  = XGBClassifier(); model.load_model('fall_detection_model.json')")
print("  proba  = model.predict_proba(scaler.transform(features))")
print("  label  = np.argmax(proba, axis=1)")
print("=" * 60)