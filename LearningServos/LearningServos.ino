#include <Servo.h>

int servoPin = 2;
int servoPos = 0;
Servo myServo;
int photoPin = A0;
int photoVal;

void setup() {
  // put your setup code here, to run once:
  myServo.attach(servoPin);
}

void loop() {
  // put your main code here, to run repeatedly:
  photoVal = analogRead(photoPin);
  servoPos = 18. / 95. * photoVal - 180./19.;
  myServo.write(servoPos);
}
