#include <Blynk.h> 
#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include<BlynkSimpleEsp8266.h>
#include<Servo.h>
char auth[]= "8o2P0u6i4tRANBPNRxXdS7abNXus2jBx";
char ssid[]="Prajwal";
char pass[]="FSSI1234";
Servo servo;
BLYNK_WRITE(V3)
{
  servo.write(param.asInt());
}

void setup() {
  // put your setup code here, to run once:
  servo.attach(2);  // attaches the servo on GIO2 to the servo object
Serial.begin(9600);
Blynk.begin(auth, ssid,pass);
}

void loop() {
  // put your main code here, to run repeatedly:
  Blynk.run();
}
