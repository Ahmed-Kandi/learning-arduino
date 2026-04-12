int potPin = A0;
int potVal;
int buzzPin = 2;
int buzzVal = 10000;

void setup() {
  // put your setup code here, to run once:
  pinMode(potPin, INPUT);
  pinMode(buzzPin, OUTPUT);
  Serial.begin(9600);
}

//Lights on max: 1000 | Lights on low : 50
//Buzz on high: 50 | Buzz on low: 5000
void loop() {
  // put your main code here, to run repeatedly:
  potVal = analogRead(potPin);
  buzzVal = -99. / 19. * potVal + 99950./19.;
  digitalWrite(buzzPin, HIGH);
  delayMicroseconds(buzzVal);
  digitalWrite(buzzPin, LOW);
  delayMicroseconds(buzzVal);
}
