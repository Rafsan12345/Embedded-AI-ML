//"Humidity","Temperature","Sun"
//input 3 variable >>> "Humidity","Temperature","Sun"
//Linear Regression model >> 0.27696515*94 -0.35122605*15 -0.20581887*850 + 250.81577387846087 

float Humidity = 94;
float Temperature = 36;
float Sun = 850;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {

double data_predict = 0.27696515*Humidity -0.35122605*Temperature -0.20581887*Sun + 250.81577387846087;

Serial.println(data_predict);

}
