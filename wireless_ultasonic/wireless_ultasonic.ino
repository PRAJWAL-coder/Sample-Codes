#include <ESP8266WiFi.h>
const int trigpin=2;
const int echo=0;
long duration;
int distance;
void setup() {
  // put your setup code here, to run once:
pinMode(2,OUTPUT);
pinMode(0,INPUT);
Serial.begin(9600);
}
void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(2,LOW);
delay(50);
digitalWrite(2,HIGH);
delay(100);
digitalWrite(2,LOW);
duration=pulseIn(0,HIGH);
distance=duration*0.0342/2;
Serial.print("Distance");
Serial.println(distance);
}
