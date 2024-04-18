#include <Neurona.h>
#include "model.h"


MLP mlp(NET_INPUTS, NET_OUTPUTS, layerSizes, MLP::LOGISTIC, initW, true);



void setup() {
  Serial.begin(115200);

  // Checked TCS34725 RGB sensor
  
//0.00,0.05,0.05
  double red = 0.00;
  double green = 0.05;
  double blue = 0.05;

  // Fill the input buffer
  netInput[1] = red;
  netInput[2] = green;
  netInput[3] = blue;

  // Run the inferencing
  int index = mlp.getActivation(netInput);
  mlpClass = Class[index];

  Serial.println(mlpClass);
}
void loop()
{

}
