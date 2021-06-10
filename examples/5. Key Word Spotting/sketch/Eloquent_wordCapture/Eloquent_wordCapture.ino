#define MIC A7
#define INTERVAL 5
#define NUM_SAMPLES 40
#define SOUND_THRESHOLD 15

float backgroundSound = -5.08;

float features[NUM_SAMPLES];

void setup() {
  Serial.begin(115200);
  pinMode(MIC, INPUT);
}

void loop() {
  if (!soundDetected()) {
    delay(10);
    return;
  }
  
  captureWord();
  printFeatures();
  delay(1000);
}

int16_t readMic() {
  // this translated the analog value to a proper interval
  return  (analogRead(MIC) - 512) >> 2;
}

bool soundDetected() {
  return abs(readMic() - backgroundSound) >= SOUND_THRESHOLD;
}

void captureWord() {
  for (uint16_t i = 0; i < NUM_SAMPLES; i++) {
    features[i] = readMic();
    delay(INTERVAL);
  }
}

void printFeatures() {
  const uint16_t numFeatures = sizeof(features) / sizeof(float);

  for (int i = 0; i < numFeatures; i++) {
    Serial.print(features[i]);
    Serial.print(i == numFeatures - 1 ? '\n' : ',');
  }
}
