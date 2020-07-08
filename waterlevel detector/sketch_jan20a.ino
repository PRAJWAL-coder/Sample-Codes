const int triggerpin=9;
const int echopin=10;
const int redled=12;
int greled=11;
int buzzer=13;
long duration;
int distance;
void setup() {
  // put your setup code here, to run once:
pinMode(triggerpin,OUTPUT);
pinMode(echopin,INPUT);
pinMode(redled,OUTPUT);
pinMode(greled,OUTPUT);
pinMode(buzzer,OUTPUT);
Serial.begin(9600);
}
void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(triggerpin,LOW);
delay(50);
digitalWrite(triggerpin,HIGH);
delay(100);
digitalWrite(triggerpin,LOW);
duration=pulseIn(echopin,HIGH);
distance=duration*0.034/2;
if(distance<40 && distance>20)
{
  digitalWrite(redled,LOW);
  digitalWrite(greled,HIGH);
  noTone(buzzer);
}
else if(distance>40)
{digitalWrite(redled,LOW);
  digitalWrite(greled,LOW);
  tone(buzzer,100,200);
}
else if(distance<10)
{
  digitalWrite(redled,HIGH);
  digitalWrite(greled,LOW);
  noTone(buzzer);
}

Serial.print("Distance:");
Serial.println(distance);
}
