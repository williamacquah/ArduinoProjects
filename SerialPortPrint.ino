int j = 1;
int x = 3;
int y = 7;
int z;
int waitT = 750;
String myString = " + ";
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  z=x+y;
  Serial.print(x);
  Serial.print(myString);
  Serial.print(y);
  Serial.print(" = ");
  Serial.println(z);
  delay(waitT);
}
