#include <Wire.h>
#include "Adafruit_TCS34725.h"

/********************************************
   Connect SCL    to analog 5
   Connect SDA    to analog 4
   Connect VDD    to 5.0/3.3V DC
   Connect GROUND to common ground
*********************************************/

Adafruit_TCS34725 tcs = Adafruit_TCS34725();

double features[3];

void setup() {
  Serial.begin(115200);

  if (tcs.begin()) {
    // Found sensor
  } else {
    Serial.println("No TCS34725 found ... check your connections");
    while (1);
  }
}

void loop() {
  readRGB();
  printFeatures();
}

void readRGB() {
  uint16_t r, g, b, c;

  tcs.getRawData(&r, &g, &b, &c);

  double red = double(r) / 20.0;
  double green = double(g) / 20.0;
  double blue = double(b) / 20.0;

  features[0] = red;
  features[1] = green;
  features[2] = blue;
}

#define samples 100
int idx;
void printFeatures() {
  const uint16_t numFeatures = sizeof(features) / sizeof(float);
  idx ++;
  for (int i = 0; i < numFeatures; i++) {
    Serial.print(features[i]);
    Serial.print(i == numFeatures - 1 ? '\n' : ',');
  }
  delay(100);
  
  if (idx >= samples) {
    // Stop sampling
    while (1);
  }
}
