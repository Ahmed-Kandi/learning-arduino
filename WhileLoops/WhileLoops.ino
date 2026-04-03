int delayTime = 100;
int potVal;
int rPin = 2;
int potPin = A0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(rPin, OUTPUT);
  pinMode(potPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  potVal = analogRead(potPin);
  Serial.println(potVal);
  delay(delayTime);

  while (potVal > 1000) {
    digitalWrite(rPin, HIGH);
    potVal = analogRead(potPin);
    Serial.println(potVal);
    delay(delayTime);
  }
  digitalWrite(rPin, LOW);
}
