int lightPin = A0;
int lightVal;
int gPin = 2;
int rPin = 3;

void setup() {
  // put your setup code here, to run once:
  pinMode(lightPin, INPUT);
  pinMode(gPin, OUTPUT);
  pinMode(rPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  lightVal = analogRead(lightPin);
  if (lightVal <= 100) {
    digitalWrite(gPin, LOW);
    digitalWrite(rPin, HIGH);
  } else {
    digitalWrite(gPin, HIGH);
    digitalWrite(rPin, LOW);
  }
}
