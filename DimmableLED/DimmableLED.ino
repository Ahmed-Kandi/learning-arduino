int potPin = A0;
int gPin = 2;
int potVal;
float gVal;

void setup() {
  // put your setup code here, to run once:
  pinMode(potPin, INPUT);
  pinMode(gPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  potVal = analogRead(potPin);
  gVal = (255./1023.) * potVal;
  analogWrite(gPin, gVal);
  Serial.println(gVal);
}
