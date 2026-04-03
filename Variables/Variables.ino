int redLED = 13;
int greenLED = 12;
int blueLED = 11;
float pi = 3.14;
int slow = 250;
int fast = 100;
int verySlow = 500;
int longW = 1000;

String myName = "Ahmed Kandil";

void setup() {
  // put your setup code here, to run once:
  pinMode(redLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(blueLED, OUTPUT);
}

// blinks a red LED 5 times slowly, a green LED 10 times rapidly, and a blue LED 15 times very slowly.
void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(redLED, HIGH);
  delay(slow);
  digitalWrite(redLED, LOW);
  delay(slow);

  digitalWrite(redLED, HIGH);
  delay(slow);
  digitalWrite(redLED, LOW);
  delay(slow);

  digitalWrite(redLED, HIGH);
  delay(slow);
  digitalWrite(redLED, LOW);
  delay(slow);

  digitalWrite(redLED, HIGH);
  delay(slow);
  digitalWrite(redLED, LOW);
  delay(slow);

  digitalWrite(redLED, HIGH);
  delay(slow);
  digitalWrite(redLED, LOW);
  delay(slow);

  digitalWrite(greenLED, HIGH);
  delay(fast);
  digitalWrite(greenLED, LOW);
  delay(fast);

  digitalWrite(greenLED, HIGH);
  delay(fast);
  digitalWrite(greenLED, LOW);
  delay(fast);

  digitalWrite(greenLED, HIGH);
  delay(fast);
  digitalWrite(greenLED, LOW);
  delay(fast);

  digitalWrite(greenLED, HIGH);
  delay(fast);
  digitalWrite(greenLED, LOW);
  delay(fast);

  digitalWrite(greenLED, HIGH);
  delay(fast);
  digitalWrite(greenLED, LOW);
  delay(fast);

  digitalWrite(greenLED, HIGH);
  delay(fast);
  digitalWrite(greenLED, LOW);
  delay(fast);

  digitalWrite(greenLED, HIGH);
  delay(fast);
  digitalWrite(greenLED, LOW);
  delay(fast);

  digitalWrite(greenLED, HIGH);
  delay(fast);
  digitalWrite(greenLED, LOW);
  delay(fast);

  digitalWrite(greenLED, HIGH);
  delay(fast);
  digitalWrite(greenLED, LOW);
  delay(fast);

  digitalWrite(greenLED, HIGH);
  delay(fast);
  digitalWrite(greenLED, LOW);
  delay(fast);

  digitalWrite(blueLED, HIGH);
  delay(verySlow);
  digitalWrite(blueLED, LOW);
  delay(verySlow);

  digitalWrite(blueLED, HIGH);
  delay(verySlow);
  digitalWrite(blueLED, LOW);
  delay(verySlow);

  digitalWrite(blueLED, HIGH);
  delay(verySlow);
  digitalWrite(blueLED, LOW);
  delay(verySlow);

  digitalWrite(blueLED, HIGH);
  delay(verySlow);
  digitalWrite(blueLED, LOW);
  delay(verySlow);

  digitalWrite(blueLED, HIGH);
  delay(verySlow);
  digitalWrite(blueLED, LOW);
  delay(verySlow);

  digitalWrite(blueLED, HIGH);
  delay(verySlow);
  digitalWrite(blueLED, LOW);
  delay(verySlow);

  digitalWrite(blueLED, HIGH);
  delay(verySlow);
  digitalWrite(blueLED, LOW);
  delay(verySlow);

  digitalWrite(blueLED, HIGH);
  delay(verySlow);
  digitalWrite(blueLED, LOW);
  delay(verySlow);

  digitalWrite(blueLED, HIGH);
  delay(verySlow);
  digitalWrite(blueLED, LOW);
  delay(verySlow);

  digitalWrite(blueLED, HIGH);
  delay(verySlow);
  digitalWrite(blueLED, LOW);
  delay(verySlow);

  digitalWrite(blueLED, HIGH);
  delay(verySlow);
  digitalWrite(blueLED, LOW);
  delay(verySlow);

  digitalWrite(blueLED, HIGH);
  delay(verySlow);
  digitalWrite(blueLED, LOW);
  delay(verySlow);

  digitalWrite(blueLED, HIGH);
  delay(verySlow);
  digitalWrite(blueLED, LOW);
  delay(verySlow);

  digitalWrite(blueLED, HIGH);
  delay(verySlow);
  digitalWrite(blueLED, LOW);
  delay(verySlow);

  digitalWrite(blueLED, HIGH);
  delay(verySlow);
  digitalWrite(blueLED, LOW);
  delay(verySlow);

  delay(longW);
}
