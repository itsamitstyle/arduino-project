//first define the led 

#include<Arduino.h>
#include<Servo.h>
Servo servo_a ;
//define the buzzer 
int buzzer = 11;
void red(){
  int red = 8;
  int a = 1 ;
  int b = 0;
  if (a>b )
  {
    digitalWrite(red , HIGH);
    delay(1000);
    digitalWrite(red , LOW );
    delay(1000);
    
    /* code */
  }
  
}
void green (){
  int green = 9;
  int  a = 1;
  int b = 0 ;
  if (a>b)
  {
    digitalWrite(green , HIGH );
    delay(1000);
    digitalWrite(green , LOW );
    delay(1000);
  }
  


}
void blue (){
  int blue = 10 ;
  int a =1;
  int b =0;
  if (a>b)
  {
    digitalWrite(blue , HIGH);
    delay(1000);
    digitalWrite(blue , LOW );
    delay(1000);
  }
  

}
void setup(){
  Serial.begin(9600);
  servo_a.attach(7);
  red();
  green();
  blue();
  pinMode(buzzer , OUTPUT);
  tone(buzzer , 100);
  delay(100);
  noTone(buzzer);
  tone(buzzer , 200);
  delay(100);
  noTone(buzzer);
  tone(buzzer , 456);
  delay(400);
  noTone(buzzer );

}
void loop(){
  int pot_a = analogRead(5);
  pot_a = map(pot_a , 1023 , 0 , 180 , 0 );
  servo_a.write(pot_a);
  Serial.println(pot_a);
  delay(15 );

}