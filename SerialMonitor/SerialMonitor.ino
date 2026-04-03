int j = 1;
int waitTime = 750;
int x = 12;
int y = 11;
int z;
String myString = " + ";
String mess1 = "A Circle With Radius ";
String mess2 = " Has an Area of ";
String mess3 = ".";
float pi = 3.14;
float r = 2;
float area;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  area = pi * r * r;
  Serial.print(mess1);
  Serial.print(r);
  Serial.print(mess2);
  Serial.print(area);
  Serial.println(mess3);
  delay(waitTime);
  r = r + .5;
}
