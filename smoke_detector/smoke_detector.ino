    int redled=12;
    int greenled=11;                                                                                                                                                                                       
    int buzzer=10;
    int smokeA0=A5;
    int senorthre=400;
void setup() {
  // put your setup code here, to run once:
pinMode(redled,OUTPUT);
pinMode(greenled,OUTPUT);
pinMode(buzzer,OUTPUT);
pinMode(smokeA0,INPUT);
Serial.begin(9600);
}
void loop() {
  // put your main code here, to run repeatedly:
int analogsensor=analogRead(smokeA0);
Serial.print("pin A0");
Serial.println(analogsensor);
{
  if(analogsensor>analogRead)
  {
    digitalWrite(redled,HIGH);
    digitalWrite(greenled,LOW);
    tone(buzzer,1000,2000);
  }
  else
  {
   digitalWrite(redled,LOW);
    digitalWrite(greenled,HIGH);
    noTone(buzzer); 
  }
}
}
