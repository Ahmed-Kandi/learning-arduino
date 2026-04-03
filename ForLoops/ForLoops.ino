int yPin = 6;
int rPin = 9;
int yTime = 500;
int rTime = 500;
int yBlink = 5;
int rBlink = 3;
int i;

void setup() {
  // put your setup code here, to run once:
  pinMode(yPin, OUTPUT);
  pinMode(rPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (i = 1; i <= yBlink; i++) {
    digitalWrite(yPin, HIGH);
    delay(yTime);
    digitalWrite(yPin, LOW);
    delay(yTime);
  }

  for (i = 1; i <= rBlink; i++) {
    digitalWrite(rPin, HIGH);
    delay(rTime);
    digitalWrite(rPin, LOW);
    delay(rTime);
  }
}
