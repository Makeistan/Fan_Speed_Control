int motorPin=3;
int fanVal=50; //You can set the speed of the motor here between 0 to 255

void setup() {
  // put your setup code here, to run once:
  pinMode(motorPin, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
fanSpeed(fanVal);

}

int fanSpeed(int fanVal)
{
  analogWrite(motorPin,fanVal);
  delay(100);
  }
