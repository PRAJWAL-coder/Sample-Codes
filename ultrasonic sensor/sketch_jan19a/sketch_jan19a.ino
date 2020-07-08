const int triggerpin=9;
const int echopin=10;
long duration;
int distance;
void setup() {
  // put your setup code here, to run once:
pinMode(triggerpin,OUTPUT);
pinMode(echopin,INPUT);
Serial.begin(9600);
}
void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(triggerpin,LOW);
delayMicroseconds(2);
digitalWrite(triggerpin,HIGH);
delayMicroseconds(10);
digitalWrite(triggerpin,LOW);
duration=pulseIn(echopin,HIGH);
distance=duration*0.034/2;
Serial.print("Distance:");
Serial.println(distance);
}
