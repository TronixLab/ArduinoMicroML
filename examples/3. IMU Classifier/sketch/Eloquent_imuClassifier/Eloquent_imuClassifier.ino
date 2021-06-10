#include <Adafruit_MPU6050.h>
#include <Adafruit_Sensor.h>
#include <Wire.h>
#include "model.h"

Adafruit_MPU6050 mpu;

Eloquent::ML::Port::RandomForest classifier;

#define ACCEL_THRESHOLD 20
#define NUM_SAMPLES 30
#define NUM_AXES 6
#define INTERVAL 50

int SAMPLES_READ = NUM_SAMPLES;
float features[NUM_SAMPLES * NUM_AXES];

void setup() {
  Serial.begin(115200);
  mpu6050Setup();
}

void loop() {
  float aX, aY, aZ, gX, gY, gZ;

  // Wait for significant motion
  while (SAMPLES_READ == NUM_SAMPLES) {
    IMUreadAcceleration(&aX, &aY, &aZ);

    // Sum up the absolutes
    float aSum = fabs(aX) + fabs(aY) + fabs(aZ);

    // Check if it's above the threshold
    if (aSum >= ACCEL_THRESHOLD) {
      // Reset the sample read count
      SAMPLES_READ = 0;
      break;
    }
  }

  while (SAMPLES_READ < NUM_SAMPLES) {
    IMUreadAcceleration(&aX, &aY, &aZ);
    IMUreadGyroscope(&gX, &gY, &gZ);

    SAMPLES_READ ++;

    features[SAMPLES_READ * NUM_AXES + 0] = aX;
    features[SAMPLES_READ * NUM_AXES + 1] = aY;
    features[SAMPLES_READ * NUM_AXES + 2] = aZ;
    features[SAMPLES_READ * NUM_AXES + 3] = gX;
    features[SAMPLES_READ * NUM_AXES + 4] = gY;
    features[SAMPLES_READ * NUM_AXES + 5] = gZ;
    delay(INTERVAL);
  }
  // Run the inferencing
  String predictionClass = classifier.predictLabel(features);
  if (predictionClass.equals("Punch")) {
    Serial.print("\xF0\x9F\x91\x8A");
    Serial.print("\t");
    Serial.print("\xF0\x9F\x91\x8A");
    Serial.print("\t");
    Serial.print("\xF0\x9F\x91\x8A");
    Serial.println();
  }
  else if (predictionClass.equals("Flex")) {
    Serial.print("\xF0\x9F\x92\xAA");
    Serial.print("\t");
    Serial.print("\xF0\x9F\x92\xAA");
    Serial.print("\t");
    Serial.print("\xF0\x9F\x92\xAA");
    Serial.println();
  }
}

void mpu6050Setup() {
  if (!mpu.begin()) {
    Serial.println("Failed to find MPU6050 chip");
    while (1) {
      delay(10);
    }
  }

  mpu.setAccelerometerRange(MPU6050_RANGE_8_G);
  /*-------------------------------------------
      Accelerometer (m/s^2) range settings:
      - MPU6050_RANGE_2_G
      - MPU6050_RANGE_4_G
      - MPU6050_RANGE_8_G
      - MPU6050_RANGE_16_G
    -------------------------------------------*/

  mpu.setGyroRange(MPU6050_RANGE_500_DEG);
  /*-------------------------------------------
    Gyrometer (deg/s) range settings:
    - MPU6050_RANGE_250_DEG
    - MPU6050_RANGE_500_DEG
    - MPU6050_RANGE_1000_DEG
    - MPU6050_RANGE_2000_DEG
    -------------------------------------------*/

  mpu.setFilterBandwidth(MPU6050_BAND_21_HZ);
  /*-------------------------------------------
    Gyrometer (deg/s) range settings:
    - MPU6050_BAND_260_HZ
    - MPU6050_BAND_184_HZ
    - MPU6050_BAND_94_HZ
    - MPU6050_BAND_44_HZ
    - MPU6050_BAND_21_HZ
    - MPU6050_BAND_10_HZ
    - MPU6050_BAND_5_HZ
    -------------------------------------------*/
}

void IMUreadAcceleration(float *ax, float *ay, float *az) {
  sensors_event_t a, g, temp;
  mpu.getEvent(&a, &g, &temp);

  // Read accelerometer raw data
  *ax = a.acceleration.x;
  *ay = a.acceleration.y;
  *az = a.acceleration.z;
}

void IMUreadGyroscope(float *gx, float *gy, float *gz) {
  sensors_event_t a, g, temp;
  mpu.getEvent(&a, &g, &temp);

  // Read gyrometer raw data
  *gx = g.gyro.x;
  *gy = g.gyro.y;
  *gz = g.gyro.z;
}
