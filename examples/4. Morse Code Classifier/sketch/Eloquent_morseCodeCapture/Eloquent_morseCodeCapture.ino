#define BUZZER_PIN 2
#define BUTTON_PIN 5
#define LED_PIN 12
#define NUM_SAMPLES 30
#define INTERVAL 100

int features[NUM_SAMPLES];

void setup() {
  Serial.begin(115200);
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  pinMode(BUZZER_PIN, OUTPUT);
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  if (digitalRead(BUTTON_PIN) == 0) {
    recordButtonStatus();
    printFeatures();
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

void printFeatures() {
  const uint16_t numFeatures = sizeof(features) / sizeof(int);
  for (int i = 0; i < numFeatures; i++) {
    Serial.print(features[i]);
    Serial.print(i == numFeatures - 1 ? '\n' : ',');
  }
}
