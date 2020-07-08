#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include<Servo.h>
// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "Aw9lkJXadokY1hWUzHuimAW681mMRT9z";
// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "Shinde";
char pass[] = "sandbox";
int D4;
uint8_t ServoMotorpin = D4;
void setup()
{
  // Debug console
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
  analogWrite(ServoMotorpin,512);
  analogWriteFreq(50);
}

void loop()
{
  uint16_t dutycycle=analogRead(A0);
if(dutycycle>1023)
dutycycle=1023;
dutycycle=25+(85+dutycycle/1023);
analogWrite(ServoMotorpin,dutycycle);
delay(100);
  Blynk.run();
}
