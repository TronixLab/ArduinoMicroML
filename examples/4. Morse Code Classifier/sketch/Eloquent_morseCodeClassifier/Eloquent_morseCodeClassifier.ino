#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include "model.h"

#define BUZZER_PIN 2
#define BUTTON_PIN 5
#define LED_PIN 12
#define NUM_SAMPLES 30
#define INTERVAL 100

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

float features[NUM_SAMPLES];

String myWord = " ";

void setup() {
  Serial.begin(115200);
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  pinMode(BUZZER_PIN, OUTPUT);
  pinMode(LED_PIN, OUTPUT);

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
  if (digitalRead(BUTTON_PIN) == 0) {
    recordButtonStatus();
    String morseCodeClass = classifier.predictLabel(features);
    myWord = myWord + morseCodeClass;
    // Print the output/prediction
    display.clearDisplay();
    display.setTextSize(2);
    display.setTextColor(SSD1306_WHITE);
    display.setCursor(10, 0);
    display.println(myWord);
    display.display();
    Serial.println(myWord);
    delay(1000);
  }
}

void recordButtonStatus() {
  for (int i = 0; i < NUM_SAMPLES; i++) {
    features[i] = digitalRead(BUTTON_PIN);
    digitalWrite(BUZZER_PIN, !features[i]);
    digitalWrite(LED_PIN, !features[i]);
    delay(INTERVAL);
  }
}
