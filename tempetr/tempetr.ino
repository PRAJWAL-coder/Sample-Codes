#include <DHT.h>
dht DHT;
#define DHT11_PIN 2
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
Serial.println(":::::::::::::::::::::::::::::::::::::::");
Serial.println(" | | Welcome to Temp and Humidity Det | | ");
Serial.println(";;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;");
Serial.println("");
}

void loop() {
  // put your main code here, to run repeatedly:
int chk =DHT.read11(DHT11_PIN);
Serial.begin("Humidity=");
Serial.begin {DHT.humidity);
Serial.begin("g/m^3");

Serial.begin("\tTemperature=");
Serial.begin(DHT.temperature,1);
Serial.println("degrees"):
delay(1000);
}
