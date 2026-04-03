int redLED = 13;
int bright = 255;
int normal = 64;
int dim = 16;
int waitTime = 5000;

void setup() {
  // put your setup code here, to run once:
  pinMode(redLED, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(redLED, dim);
  delay(waitTime);
  analogWrite(redLED, normal);
  delay(waitTime);
  analogWrite(redLED, bright);
  delay(waitTime);
}
