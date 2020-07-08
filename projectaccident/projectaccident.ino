#define BLYNK_PRINT Serial
#include<Wire.h>
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
const int MPU=0x68;
int16_t AcX,AcY,AcZ,Tmp,GyX,GyY,GyZ;
char auth[]= "8o2P0u6i4tRANBPNRxXdS7abNXus2jBx";
char ssid[]="Prajwal";
char pass[]="FSSI1234";
WidgetLCD lcd(V1);

void setup() {
  // put your setup code here, to run once:
Wire.begin();
Wire.beginTransmission(MPU);
Wire.write(0x6B);
Wire.write(0);
Wire.endTransmission(true);
Serial.begin(9600);
 Blynk.begin(auth,ssid,pass);
}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.clear();
 Wire.beginTransmission(MPU);
 Wire.begin(0X3B);
 Wire.endTransmission(false); 
 Wire.requestFrom(MPU,12,true);
 AcX=Wire.read()<<8|Wire.read();
 AcY=Wire.read()<<8|Wire.read();
 AcZ=Wire.read()<<8|Wire.read();
 GyX=Wire.read()<<8|Wire.read();
 GyY=Wire.read()<<8|Wire.read();
 GyZ=Wire.read()<<8|Wire.read();
 Serial.print("Accelerometer:");
 Serial.print("X=");Serial.print(AcX);
 Serial.print("|y=");Serial.print(AcZ);
 Serial.print("|Z=");Serial.print(AcZ);
  
  Serial.print("gyrosc:");
  Serial.println(" ");
 if((AcX>500)||(AcY>500))
 {
  Serial.print("Accident Occured");
  lcd.print(0,0,"accident occured");
  lcd.print(7,1,AcX);     
  for(;;) {/*empty*/}
             
 }
 
  Blynk.run();
  delay(333);
}
