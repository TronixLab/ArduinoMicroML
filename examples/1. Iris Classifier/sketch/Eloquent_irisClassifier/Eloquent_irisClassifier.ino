#include "model.h"

Eloquent::ML::Port::RandomForest classifier;

void setup() {
    Serial.begin(115200);
}

void loop() {
    if (Serial.available()) {
        float features[4];
        for (int i = 0; i < 4; i++) {
            // split features on comma (,)
            String feature = Serial.readStringUntil(',');
            features[i] = atof(feature.c_str());
        }
        Serial.print("Detected species: ");
        Serial.println(classifier.predictLabel(features));
    }
    delay(10);
}
