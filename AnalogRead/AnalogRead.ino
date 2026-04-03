int readPin = A0;
float V2 = 0;
int waitTime = 500;
int readVal;

void setup() {
  // put your setup code here, to run once:
  pinMode(readPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  readVal = analogRead(readPin);
  V2 = (5./1023.) * readVal;
  Serial.println(V2);
  delay(waitTime);
}

// Estimated voltage for 220 ohms and 10 ohms
// V = IR, I = 5V / 230 ohms, I = 21.7 mA
// V = IR, V = 21.7 mA * 220 ohms, V = 4.78 V
// 5 V - 4.78 V = 0.217 V
// V = IR, V = 21.7 mA * 10 ohms, V = 0.217 V
// 0.217 V - 0.217 V = 0 V