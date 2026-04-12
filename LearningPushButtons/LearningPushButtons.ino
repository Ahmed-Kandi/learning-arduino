int rPin = 3;
int butPin = 2;
bool butVal;
bool state;
int dt = 100;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(rPin, OUTPUT);
  pinMode(butPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  butVal = digitalRead(butPin);

  if (butVal == 0) {
    state = !state;
    while (butVal == 0) {
      butVal = digitalRead(butPin);
    }
  }
  if (state) {
    digitalWrite(rPin, HIGH);
  } else {
    digitalWrite(rPin, LOW);
  }

  delay(dt);
}
