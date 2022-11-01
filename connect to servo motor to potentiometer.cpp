//connect to arduino to potentiometer 

#include<Arduino.h>
#include<Servo.h>
//define the servo 
Servo servo;

void setup(){
  Serial.begin(9600) ;//set the buds 
  servo.attach(7);
}
void loop(){
  int pot ; //define the potentiometer 
  pot = analogRead(5); //define the pin 
  pot = map(pot , 1023 , 0 , 180 , 0 );
  servo . write(pot);
  Serial.println(pot );
  delay(15);

}