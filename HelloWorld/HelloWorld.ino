void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //The least ammount of delay possible while still being able to see the LED flicker is 12ms.
  digitalWrite(13, HIGH);
  delay(12);
  digitalWrite(13, LOW);
  delay(12);
}

