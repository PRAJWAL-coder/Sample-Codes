void setup() {
  // put your setup code here, to run once:
pinMode(13,OUTPUT);
}

void loop() {
  digitalWrite(13,HIGH);
  digitalWrite(12,LOW);
  digitalWrite(7,LOW);
  delay(1000);
   digitalWrite(13,LOW);
  digitalWrite(12,HIGH);
  digitalWrite(7,LOW);
  delay(1000);
   digitalWrite(13,LOW);
  digitalWrite(12,LOW);
  digitalWrite(7,HIGH);
  delay(1000);
  // put your main code here, to run repeatedly:

}
