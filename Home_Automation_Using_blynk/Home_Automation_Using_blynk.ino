# define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
int relayInput=2;
// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "Aw9lkJXadokY1hWUzHuimAW681mMRT9z";

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "Shinde";
char pass[] = "billuman8";

void setup()
{
  // Debug console
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
}

void loop()
{
  Blynk.run();
  
}
