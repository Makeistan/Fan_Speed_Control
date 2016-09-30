int motorPin=3;
int dimmerPin=A0;
int dimmerVal=0;

void setup() {
  // put your setup code here, to run once:
  pinMode(motorPin, OUTPUT);
  pinMode(dimmerPin, INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
dimmerVal=analogRead(dimmerPin);


if (dimmerVal>200 && dimmerVal<=800)
{
  fanSpeed(dimmerVal/4);
  Serial.print("Fan speed is = ");
  Serial.println(dimmerVal);
  }

 else if(dimmerVal>800)
 {
  fanSpeed(1000);
  Serial.println("Fan Speed maximum");
  }

  else
  {
    fanSpeed(0);
    Serial.println("Fan is OFF");
    }
  

}

int fanSpeed(int fanVal)
{
  analogWrite(motorPin,fanVal);
  delay(100);
  
  }
