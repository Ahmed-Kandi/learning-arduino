int readPin = A0;
int greenPin = 2;
int yellowPin = 3;
int redPin = 4;
int readVal;
float V2;
int waitTime = 250;

void setup() {
  // put your setup code here, to run once:
  pinMode(readPin, INPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(redPin, OUTPUT);
}

// If the voltage is under 3 volts, turn on the green LED. If the voltage is between 3 and 4 volts, turn on the yellow LED. If the voltage is above 4 volts, turn on the red LED.
void loop() {
  // put your main code here, to run repeatedly:
  readVal = analogRead(readPin);
  V2 = (5. / 1023.) * readVal;
  if (V2 >= 0 && V2 < 3) {
    digitalWrite(greenPin, HIGH);
    digitalWrite(yellowPin, LOW);
  } else if (V2 >= 3 && V2 <= 4) {
    digitalWrite(greenPin, LOW);
    digitalWrite(yellowPin, HIGH);
    digitalWrite(redPin, LOW);
  } else {
    digitalWrite(yellowPin, LOW);
    digitalWrite(redPin, HIGH);
  }
}
