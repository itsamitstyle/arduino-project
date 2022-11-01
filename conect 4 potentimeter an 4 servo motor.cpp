//connect the four potentiometer 
#include<Arduino.h>
#include<Servo.h>
//define the servo 
Servo servo_a;
Servo servo_b;
Servo servo_c;
Servo servo_d;
//define the potentiometer 
int pot_a ;
int pot_b ;
int pot_c;
int pot_d ;
//define the buzzer 
int buzzer = 8;



void setup(){
  Serial.begin(9600);
  pinMode(buzzer , OUTPUT);

  servo_a.attach(6);
  servo_b.attach(7);
  servo_c.attach(5);
  servo_d.attach(4);

}
void loop(){
  //define the servo 1 
  pot_a = analogRead(5);
  pot_a= map(pot_a , 1023 , 0 , 180 , 0 );
  servo_a . write(pot_a );
  Serial.println(pot_a);
  tone(buzzer , 100);
  delay(10);
  noTone(buzzer);
  //define the servo 2 
  pot_b = analogRead(4);
  pot_b = map(pot_b , 1023 , 0 , 180 , 0 );
  servo_b . write(pot_b );
  Serial.println(pot_b);
  tone(buzzer , 200);
  delay(10);
  noTone(buzzer);
  //define the third servo 
  pot_c = analogRead(3);
  pot_c = map(pot_c , 1023 , 0 , 180 , 0 );
  servo_c . write(pot_c );
  Serial.println(pot_c);
  tone(buzzer , 300);
  delay(10);
  noTone(buzzer);
  //define the fourth servo


  pot_d = analogRead(2);
  pot_d = map(pot_d , 1023 , 0 , 180 , 0 );
  servo_d . write(pot_d );
  Serial.println(pot_d);
  tone(buzzer , 400);
  delay(10);
  noTone(buzzer);

  delay(12 );


}