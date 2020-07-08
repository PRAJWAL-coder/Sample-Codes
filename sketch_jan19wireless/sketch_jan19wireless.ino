#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include<BlynkSimpleEsp8266.h>
const int trigPin=4;
const int echoPin=5;
long duration;
int distance;
char auth[]= "eEelJ6T_-nDUpVV7naBaD6EuEdQ9TPmV";
char ssid[]="Shinde";
char pass[]="billuman8";
WidgetLCD lcd(V1);

void setup() {
pinMode(trigPin,OUTPUT);
pinMode(echoPin,INPUT);
Serial.begin(9600);
Blynk.begin(auth, ssid,pass);
lcd.clear();
}

void loop() {
lcd.clear();
lcd.print(0,0,"Distance in cm");
digitalWrite(trigPin,LOW);
delay(2000);
digitalWrite(trigPin,HIGH);
delay(10000);
digitalWrite(trigPin,LOW);
duration=pulseIn(echoPin,HIGH);
distance=duration*0.034/2;
Serial.print("Distance: ");
Serial.println(distance);
lcd.print(7,1,distance);
Blynk.run();
delay(3000);
}
