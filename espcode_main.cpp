#include <Adafruit_MPU6050.h>
#include <Adafruit_Sensor.h>
#include <Wire.h>
#include <math.h>
#include "model.h"  // Ensure this file is in the same folder as your sketch

Adafruit_MPU6050 mpu;

// --- STEP 1: Paste your StandardScaler values here ---
// These must come from your Python code: scaler.mean_ and scaler.scale_
float scaler_mean[]  = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0}; 
float scaler_scale[] = {1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0};

#define WINDOW_SIZE    80
#define THRESHOLD      0.6f  
#define SAMPLE_RATE_HZ 200
#define INTERVAL_MS    (1000 / SAMPLE_RATE_HZ)

float accel_x[WINDOW_SIZE], accel_y[WINDOW_SIZE], accel_z[WINDOW_SIZE];
float gyro_x[WINDOW_SIZE],  gyro_y[WINDOW_SIZE],  gyro_z[WINDOW_SIZE];
int   sample_idx = 0;
unsigned long lastSampleTime = 0;

void setup() {
  Serial.begin(115200);
  pinMode(LED_BUILTIN, OUTPUT);

  if (!mpu.begin()) {
    Serial.println("MPU6050 not found!");
    while (1) delay(10);
  }

  // Range setup to match SisFall
  mpu.setAccelerometerRange(MPU6050_RANGE_16_G);
  mpu.setGyroRange(MPU6050_RANGE_2000_DEG);
  
  // Set Bandwidth to 94Hz to capture the "sharp" jolt of a fall
  mpu.setFilterBandwidth(MPU6050_BAND_94_HZ); 

  Serial.println("MPU6050 Initialized at 200Hz.");
}

void extract_features(float* features) {
  float svm[WINDOW_SIZE], gvm[WINDOW_SIZE], tilt[WINDOW_SIZE];
  float svm_sum = 0, svm_max = -1e9, svm_min = 1e9;
  float gvm_sum = 0, gvm_max = -1e9;
  float tilt_sum = 0, tilt_max = -1e9, tilt_min = 1e9;

  for (int i = 0; i < WINDOW_SIZE; i++) {
    // Vector Magnitudes
    svm[i]  = sqrt(accel_x[i]*accel_x[i] + accel_y[i]*accel_y[i] + accel_z[i]*accel_z[i]);
    gvm[i]  = sqrt(gyro_x[i]*gyro_x[i]   + gyro_y[i]*gyro_y[i]   + gyro_z[i]*gyro_z[i]);
    
    // Tilt angle in degrees
    tilt[i] = atan2(sqrt(accel_x[i]*accel_x[i] + accel_y[i]*accel_y[i]), accel_z[i]) * 57.2958f;

    // Accumulate for statistical features
    svm_sum += svm[i];   svm_max = max(svm_max, svm[i]);   svm_min = min(svm_min, svm[i]);
    gvm_sum += gvm[i];   gvm_max = max(gvm_max, gvm[i]);
    tilt_sum += tilt[i]; tilt_max = max(tilt_max, tilt[i]); tilt_min = min(tilt_min, tilt[i]);
  }

  float svm_avg = svm_sum / WINDOW_SIZE;
  float variance = 0;
  for (int i = 0; i < WINDOW_SIZE; i++) variance += (svm[i] - svm_avg) * (svm[i] - svm_avg);
  float svm_std = sqrt(variance / WINDOW_SIZE);

  // Map to the 9 features expected by your XGBoost model
  features = svm_avg;
  features = svm_max;
  features = svm_min;
  features = svm_std;
  features = gvm_sum / WINDOW_SIZE;
  features = gvm_max;
  features = tilt_sum / WINDOW_SIZE;
  features = tilt_max - tilt_min;
  features = (svm_std > 0.001f) ? svm_avg / svm_std : 0.0f; // Signal-to-Noise ratio
}

void apply_scaler(float* features) {
  for (int i = 0; i < 9; i++) {
    features[i] = (features[i] - scaler_mean[i]) / scaler_scale[i];
  }
}

void loop() {
  // Precision Timing: Read exactly every 5ms (200Hz)
  if (millis() - lastSampleTime >= INTERVAL_MS) {
    lastSampleTime = millis();

    sensors_event_t a, g, temp;
    mpu.getEvent(&a, &g, &temp);

    // Convert raw m/s^2 and rad/s to G and deg/s for SisFall compatibility
    accel_x[sample_idx] = a.acceleration.x / 9.81f;
    accel_y[sample_idx] = a.acceleration.y / 9.81f;
    accel_z[sample_idx] = a.acceleration.z / 9.81f;
    gyro_x[sample_idx]  = g.gyro.x * 57.2958f;
    gyro_y[sample_idx]  = g.gyro.y * 57.2958f;
    gyro_z[sample_idx]  = g.gyro.z * 57.2958f;
    sample_idx++;

    // Process Window
    if (sample_idx >= WINDOW_SIZE) {
      float features;
      extract_features(features);
      apply_scaler(features);

      // Inference
      double input;
      double output; // [ADL_Prob, PreFall_Prob, Fall_Prob]
      for (int i = 0; i < 9; i++) input[i] = (double)features[i];
      
      score(input, output);

      // Handle Logic
      if (output >= THRESHOLD) {
        Serial.printf("!!! FALL !!! (Prob: %.2f)\n", output);
        digitalWrite(LED_BUILTIN, HIGH);
      } else if (output >= THRESHOLD) {
        Serial.printf("Warning: Pre-Fall (Prob: %.2f)\n", output);
      } else {
        digitalWrite(LED_BUILTIN, LOW);
      }

      // Slide Window: 50% overlap (keep last 40 samples)
      for (int i = 0; i < 40; i++) {
        accel_x[i] = accel_x[i + 40];
        accel_y[i] = accel_y[i + 40];
        accel_z[i] = accel_z[i + 40];
        gyro_x[i]  = gyro_x[i + 40];
        gyro_y[i]  = gyro_y[i + 40];
        gyro_z[i]  = gyro_z[i + 40];
      }
      sample_idx = 40;
    }
  }
}