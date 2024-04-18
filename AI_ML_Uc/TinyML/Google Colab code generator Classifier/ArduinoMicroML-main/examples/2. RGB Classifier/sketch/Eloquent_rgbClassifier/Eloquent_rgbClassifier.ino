#include "model.h"

Eloquent::ML::Port::RandomForest classifier;

float features[3];

void setup() {
  Serial.begin(115200);

}

void loop() {
  readRGB();

  
  String predictionClass = classifier.predictLabel(features);

  Serial.println(predictionClass);
}

void readRGB() {
  uint16_t r, g, b, c;


  float red =0.45;
  float green = 0.15;
  float blue = 0.15;

  // Fill the input buffer
  features[0] = red;
  features[1] = green;
  features[2] = blue;
}
