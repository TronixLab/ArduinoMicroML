#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include "Adafruit_TCS34725.h"
#include "model.h"

/********************************************
   Connect SCL    to analog 5
   Connect SDA    to analog 4
   Connect VDD    to 5.0/3.3V DC
   Connect GROUND to common ground
*********************************************/

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET     4
#define SCREEN_ADDRESS 0x3C
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

Adafruit_TCS34725 tcs = Adafruit_TCS34725();

Eloquent::ML::Port::RandomForest classifier;

float features[3];

void setup() {
  Serial.begin(115200);

  if (tcs.begin()) {
    // Found sensor
  } else {
    Serial.println("No TCS34725 found ... check your connections");
    while (1);
  }

  // Checked the OLED display
  if (!display.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS)) {
    Serial.println(F("SSD1306 allocation failed"));
    for (;;);
  }
  display.display();
  delay(2000);
  display.clearDisplay();
  display.setTextColor(WHITE);
  display.setTextSize(2);
}

void loop() {
  readRGB();

  // Run the inferencing
  String predictionClass = classifier.predictLabel(features);

  // Print the output/prediction
  display.clearDisplay();
  display.setTextSize(2);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(10, 0);
  display.println(predictionClass);
  display.display();
  delay(2000);
  Serial.println(predictionClass);
}

void readRGB() {
  uint16_t r, g, b, c;

  tcs.getRawData(&r, &g, &b, &c);

  float red = float(r) / 20.0;
  float green = float(g) / 20.0;
  float blue = float(b) / 20.0;

  // Fill the input buffer
  features[0] = red;
  features[1] = green;
  features[2] = blue;
}
