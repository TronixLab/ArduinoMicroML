#define MIC A7
#define INTERVAL 5
#define SOUND_THRESHOLD 15

float backgroundSound = -5.08;

void setup() {
  Serial.begin(115200);
  pinMode(MIC, INPUT);
}

void loop() {
  if (!soundDetected()) {
    delay(10);
    return;
  }
  Serial.println("Sound Detected!");
}

int16_t readMic() {
  // this translated the analog value to a proper interval
  return  (analogRead(MIC) - 512) >> 2;
}

bool soundDetected() {
  Serial.println(abs(readMic() - backgroundSound));
  return abs(readMic() - backgroundSound) >= SOUND_THRESHOLD;
}
