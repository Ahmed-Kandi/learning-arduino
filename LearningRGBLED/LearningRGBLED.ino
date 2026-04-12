int rPin = 2;
int gPin = 3;
int bPin = 4;
String myColor;
String msg = "What Color Do You Want?";

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(rPin, OUTPUT);
  pinMode(gPin, OUTPUT);
  pinMode(bPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(msg);
  while (Serial.available() == 0) {}
  myColor = Serial.readString();

  if (myColor == "red") {
    digitalWrite(rPin, HIGH);
    digitalWrite(gPin, LOW);
    digitalWrite(bPin, LOW);
  } else if (myColor == "green") {
    digitalWrite(rPin, LOW);
    digitalWrite(gPin, HIGH);
    digitalWrite(bPin, LOW);
  } else if (myColor == "blue") {
    digitalWrite(rPin, LOW);
    digitalWrite(gPin, LOW);
    digitalWrite(bPin, HIGH);
  } else if (myColor == "cyan") {
    digitalWrite(rPin, LOW);
    digitalWrite(gPin, HIGH);
    analogWrite(bPin, 127);
  } else if (myColor == "magenta") {
    digitalWrite(rPin, HIGH);
    digitalWrite(gPin, LOW);
    analogWrite(bPin, 127);
  } else if (myColor == "yellow") {
    digitalWrite(rPin, HIGH);
    analogWrite(gPin, 127);
    digitalWrite(bPin, LOW);
  } else if (myColor == "orange") {
    digitalWrite(rPin, HIGH);
    analogWrite(gPin, 31);
    digitalWrite(bPin, LOW);
  } else if (myColor == "off") {
    digitalWrite(rPin, LOW);
    digitalWrite(gPin, LOW);
    digitalWrite(bPin, LOW);
  } else if (myColor == "fuchsia") {
    digitalWrite(rPin, HIGH);
    digitalWrite(gPin, LOW);
    analogWrite(bPin, 63);
  }
}
