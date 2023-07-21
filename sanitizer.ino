#include <Servo.h>
Servo pos; 
int Signal = 8;
void setup() 
{
  Serial.begin(9600);
  pinMode(Signal, INPUT);
  pos.attach(10); 
  pos.write(0); 
}
void loop() {
  if(digitalRead (Signal) == LOW)
  {
    pos.write(180);
    Serial.println("ON");
    }
    else{
      pos.write(0);
      Serial.println("OFF");
      }
}
