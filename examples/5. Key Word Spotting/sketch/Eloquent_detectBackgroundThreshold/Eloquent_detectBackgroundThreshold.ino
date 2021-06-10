#define MIC A7

float backgroundSound = 0;

void setup() {
  Serial.begin(115200);
  pinMode(MIC, INPUT);
  calibrate();
}

void loop() {
}

int16_t readMic() {
  // this translated the analog value to a proper interval
  return  (analogRead(MIC) - 512) >> 2;
}

void calibrate() {
  for (int i = 0; i < 200; i++) {
    backgroundSound += readMic();
  }

  backgroundSound /= 200;

  Serial.print("Background sound level is ");
  Serial.println(backgroundSound);
}
