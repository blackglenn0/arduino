
int switchState = 0;
void setup() 
{
  pinMode(9, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(2, INPUT);
  pinMode(6, INPUT);
 
 
}
void loop() 
{
 switchState = digitalRead(2);
 if (switchState == LOW )
 {
   digitalWrite(3, HIGH);
   digitalWrite(4, LOW);
   digitalWrite(5, LOW);
 }
 else
 {
   digitalWrite(3, LOW);
   digitalWrite(4, LOW);
   digitalWrite(5, HIGH);
   delay(250);
   digitalWrite(4, HIGH);
   digitalWrite(5, LOW);
   delay(250);
 }
 
 }
