#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include<BlynkSimpleEsp8266.h>
char auth[]= "8o2P0u6i4tRANBPNRxXdS7abNXus2jBx";
char ssid[]="Prajwal";
char pass[]="FSSI1234";
int relayInput =2;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
Blynk.begin(auth, ssid,pass);

}

void loop() {
  // put your main code here, to run repeatedly:
Blynk.run();
}
