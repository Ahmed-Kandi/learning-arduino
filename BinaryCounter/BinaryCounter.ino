  int zeroth = 13;
  int first = 12;
  int second = 11;
  int third = 10;
  int fourth = 9;
  int waitTime = 1000;

void setup() {
  // put your setup code here, to run once:
  pinMode(zeroth, OUTPUT);
  pinMode(first, OUTPUT);
  pinMode(second, OUTPUT);
  pinMode(third, OUTPUT);
  pinMode(fourth, OUTPUT);
}

// Blinks 4 white LEDs in order to represent the binary numbers corresponding to the decimal numbers 0 through 15.
void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(zeroth, LOW);
  digitalWrite(first, LOW);
  digitalWrite(second, LOW);
  digitalWrite(third, LOW);
  digitalWrite(fourth, LOW);
  delay(waitTime);

  digitalWrite(fourth, HIGH);
  delay(waitTime);

  digitalWrite(third, HIGH);
  digitalWrite(fourth, LOW);
  delay(waitTime);

  digitalWrite(fourth, HIGH);
  delay(waitTime);

  digitalWrite(second, HIGH);
  digitalWrite(third, LOW);
  digitalWrite(fourth, LOW);
  delay(waitTime);

  digitalWrite(fourth, HIGH);
  delay(waitTime);

  digitalWrite(third, HIGH);
  digitalWrite(fourth, LOW);
  delay(waitTime);

  digitalWrite(fourth, HIGH);
  delay(waitTime);

  digitalWrite(first, HIGH);
  digitalWrite(second, LOW);
  digitalWrite(third, LOW);
  digitalWrite(fourth, LOW);
  delay(waitTime);

  digitalWrite(fourth, HIGH);
  delay(waitTime);

  digitalWrite(third, HIGH);
  digitalWrite(fourth, LOW);
  delay(waitTime);

  digitalWrite(fourth, HIGH);
  delay(waitTime);

  digitalWrite(second, HIGH);
  digitalWrite(third, LOW);
  digitalWrite(fourth, LOW);
  delay(waitTime);

  digitalWrite(fourth, HIGH);
  delay(waitTime);

  digitalWrite(third, HIGH);
  digitalWrite(fourth, LOW);
  delay(waitTime);

  digitalWrite(fourth, HIGH);
  delay(waitTime);

  digitalWrite(zeroth, HIGH);
  digitalWrite(first, LOW);
  digitalWrite(second, LOW);
  digitalWrite(third, LOW);
  digitalWrite(fourth, LOW);
  delay(waitTime);

  digitalWrite(fourth, HIGH);
  delay(waitTime);

  digitalWrite(third, HIGH);
  digitalWrite(fourth, LOW);
  delay(waitTime);

  digitalWrite(fourth, HIGH);
  delay(waitTime);

  digitalWrite(second, HIGH);
  digitalWrite(third, LOW);
  digitalWrite(fourth, LOW);
  delay(waitTime);

  digitalWrite(fourth, HIGH);
  delay(waitTime);

  digitalWrite(third, HIGH);
  digitalWrite(fourth, LOW);
  delay(waitTime);

  digitalWrite(fourth, HIGH);
  delay(waitTime);

  digitalWrite(first, HIGH);
  digitalWrite(second, LOW);
  digitalWrite(third, LOW);
  digitalWrite(fourth, LOW);
  delay(waitTime);

  digitalWrite(fourth, HIGH);
  delay(waitTime);

  digitalWrite(third, HIGH);
  digitalWrite(fourth, LOW);
  delay(waitTime);

  digitalWrite(fourth, HIGH);
  delay(waitTime);

  digitalWrite(second, HIGH);
  digitalWrite(third, LOW);
  digitalWrite(fourth, LOW);
  delay(waitTime);

  digitalWrite(fourth, HIGH);
  delay(waitTime);

  digitalWrite(third, HIGH);
  digitalWrite(fourth, LOW);
  delay(waitTime);

  digitalWrite(fourth, HIGH);
  delay(waitTime);
}