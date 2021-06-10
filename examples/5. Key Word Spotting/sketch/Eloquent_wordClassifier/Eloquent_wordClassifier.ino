#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include "model.h"

#define MIC A7
#define INTERVAL 5
#define NUM_SAMPLES 40
#define SOUND_THRESHOLD 35
#define RED_LED 12
#define BLUE_LED 7

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

Eloquent::ML::Port::RandomForest classifier;

float backgroundSound = -3 0.00;

float features[NUM_SAMPLES];

void setup() {
  Serial.begin(115200);
  pinMode(MIC, INPUT);
  pinMode(RED_LED, OUTPUT);
  pinMode(BLUE_LED, OUTPUT);

  // Checked the OLED display
  if (!display.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS)) {
    Serial.println(F("SSD1306 allocation failed"));
    for (;;);
  }
  display.display();
  delay(2000);
  display.clearDisplay();

  calibrate();
}

void loop() {
  if (!soundDetected()) {
    delay(10);
    return;
  }
  Serial.println("Sound Detected!");

  captureWord();
  // Run the inferencing
  String predictionClass = classifier.predictLabel(features);

  // Print the output/prediction
  display.clearDisplay();
  display.setTextSize(4);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(10, 0);
  display.println(predictionClass);
  display.display();
  Serial.print(F("You said "));
  Serial.println(predictionClass);

  // Turn on LED indicators
  if (predictionClass.equals(F("Yes"))) {
    digitalWrite(RED_LED, LOW);
    digitalWrite(BLUE_LED, HIGH);
  }
  else if (predictionClass.equals(F("No"))) {
    digitalWrite(RED_LED, HIGH);
    digitalWrite(BLUE_LED, LOW);
  }
  delay(1000);
}

int16_t readMic() {
  // this translated the analog value to a proper interval
  return  (analogRead(MIC) - 512) >> 2;
}

bool soundDetected() {
  Serial.println(abs(readMic() - backgroundSound));
  return abs(readMic() - backgroundSound) >= SOUND_THRESHOLD;
}

void captureWord() {
  for (uint16_t i = 0; i < NUM_SAMPLES; i++) {
    features[i] = readMic();
    delay(INTERVAL);
  }
}

void calibrate() {
  for (int i = 0; i < 200; i++) {
    backgroundSound += readMic();
  }

  backgroundSound /= 200;

  Serial.print("Background sound level is ");
  Serial.println(backgroundSound);
}
