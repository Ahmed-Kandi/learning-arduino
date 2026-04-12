int rPin = 2;
int downButPin = 3;
int upButPin = 4;
int buzPin = 5;
int rVal = 0;
int downVal = 1;
int upVal = 1;
int dt = 50;

void setup() {
  // put your setup code here, to run once:
  pinMode(rPin, OUTPUT);
  pinMode(downButPin, INPUT);
  pinMode(upButPin, INPUT);
  pinMode(buzPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(downButPin) == 0) {
    if (rVal - 5 >= 0) {
      rVal -= 5;
    } else {
      digitalWrite(buzPin, HIGH);
      delay(dt);
      digitalWrite(buzPin, LOW);
      delay(dt);
    }
  } else if (digitalRead(upButPin) == 0) {
    if (rVal + 5 <= 255) {
      rVal += 5;
    } else {
      digitalWrite(buzPin, HIGH);
      delay(dt);
      digitalWrite(buzPin, LOW);
      delay(dt);
    }
  }
  analogWrite(rPin, rVal);
  delay(dt);
}
