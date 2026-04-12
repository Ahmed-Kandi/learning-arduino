int potPin = A0;
int potVal;
int buzzPin = 2;
int buzzDelay;

void setup() {
  // put your setup code here, to run once:
  pinMode(potPin, INPUT);
  pinMode(buzzPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  potVal = analogRead(potPin);
  buzzDelay = -9940. / 1023. * potVal + 10000;
  
  digitalWrite(buzzPin, HIGH);
  delayMicroseconds(buzzDelay);
  digitalWrite(buzzPin, LOW);
  delayMicroseconds(buzzDelay);
}
