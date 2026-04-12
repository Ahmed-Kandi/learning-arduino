int xPin = A0;
int yPin = A1;
int sPin = 2;
int xVal, yVal, sVal;
int dt = 200;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(xPin, INPUT);
  pinMode(yPin, INPUT);
  pinMode(sPin, INPUT);
  digitalWrite(sPin, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  xVal = analogRead(xPin);
  yVal = analogRead(yPin);
  sVal = digitalRead(sPin);
  delay(dt);
  Serial.print("x value = ");
  Serial.print(xVal);
  Serial.print(", y value = ");
  Serial.print(yVal);
  Serial.print(", s value = ");
  Serial.println(sVal);
}
