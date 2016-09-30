int dimmerPin=A0;
int dimmerVal=0;

void setup() {
  // put your setup code here, to run once:
 
  pinMode(dimmerPin, INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
dimmerVal=analogRead(dimmerPin);
Serial.println(dimmerVal);

}

