#include <Arduino.h>

int myNum;
int buzzPin=8;
int dt=2000;
int potPin=A0;
int potVal;
int delayT=250;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(buzzPin, OUTPUT);
  pinMode(potPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  potVal=analogRead(potPin);
  Serial.println(potVal);
  delay(delayT);
  if(potVal>1000){
    digitalWrite(buzzPin, HIGH);
    delay(dt);
    digitalWrite(buzzPin, LOW);
  }
  
}