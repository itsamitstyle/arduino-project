//this robot is powered by pie.space 
//any information about this robot please contatct me on what's app = 7870222976 ;
//THIS IS AGNI ROBOT SOFTWARE 
#include<arduino.h>
//define the leds and check the buzzer for all system 
const int led_red = 1; //define the led_red value 
const int led_yellow = 2 ; //define the yellow led value 
const int led_blue = 3 ;//define the blue led value 
//define the buzzer 
const int buzzer = 4 ;
//making the function to check the led cunnection 
//DEFINE THE ULTROSONIC SENSOR 
#define echo_pin 12   //input pin (not use semicolon )
#define trig_pin  11 //output pin  (not use semicolon )
long duration ;
int distance ;

void space(){
    const int math$ = 1;
    const int spacex = 0;
    if(math$>spacex){
        digitalWrite(led_red , HIGH);
        delay(1000);
        tone(buzzer , 120); //define the buzzer value and set the tone 
        delay(200); //define the delay value 
        noTone(buzzer);
        tone(buzzer, 220);//define the second tone 
        delay(200); //define the delay value 
        noTone(buzzer);
        tone(buzzer , 330);//define the third tone 
        delay(200);
        noTone(buzzer);
        const int done = 0;
        const int rocket = 0;
        if(done == rocket ){
            digitalWrite(led_red , LOW );
            delay(1000);
            Serial.println("******************************this is pie.space and this is agni spftware 2.0 **************** \n ");
            Serial.println("$$$$$$$$$$$$$$$$$CHECK ALL THE FUNCTION &&&&&&&&&&&&&&&&&&&&&\n ");
            Serial.print("check the led and buzzer and long beep for done \n ");

        }
    }
}
void check_led_buzzer (){
    //first check the led and done the program using if else and loop 
    const int chop = 0;
    const int rocketry$ = 0;
    if(chop ==rocketry$ ){
        int a =0 ;//define the red led check 
        for(a=0 ; a<=3 ; a++){
            digitalWrite(led_red , HIGH );//define the red led value 
            delay(400);//define the delay value 
            tone(buzzer , 440); //define the buzzer and tone value 
            delay(800); //define the buzzer delay value 
            noTone(buzzer );
            digitalWrite(led_red , LOW);
            delay(400);


        }
         int b =0 ;
        for(b = 0 ; b<= 3 ; b++){
            digitalWrite(led_blue, HIGH );//define the blue led value 
            delay(400);//define the delay value 
            tone(buzzer , 760); //define the buzzer and tone value 
            delay(200); //define the buzzer delay value 
            noTone(buzzer );
            digitalWrite(led_blue, LOW);
            delay(100);
        }
         int spacey = 0;
        for (spacey =0 ; spacey<= 4 ; spacey++){
             digitalWrite(led_yellow, HIGH );//define the yellow led value 
            delay(400);//define the delay value 
            tone(buzzer , 760); //define the buzzer and tone value 
            delay(300); //define the buzzer delay value 
            noTone(buzzer );
            digitalWrite(led_yellow, LOW);
            delay(400);

        }
        
         // this is long beep for every thing is done 
        tone(buzzer , 450);
        delay(5000) ;// the time value is 5  second 
        noTone(buzzer );
        Serial.println("*********DONE  ***************\n ");

    }
    
}

void ultrosoinc (){
   digitalWrite(trig_pin, LOW);
  delayMicroseconds(1);
  // Sets the trigPin HIGH (ACTIVE) for 20 microseconds
  digitalWrite(trig_pin, HIGH);
  delayMicroseconds(20);
  digitalWrite(trig_pin, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echo_pin, HIGH);
  // Calculating the distance
  distance = duration * 0.034 / 2; // Speed of sound wave divided by 2 (go and back)
  // Displays the distance on the Serial Monitor
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");
  if(distance == 0 ){
    digitalWrite(buzzer , HIGH );
    delay(800);
    digitalWrite(led_red , HIGH );
    digitalWrite(led_blue , HIGH );
    digitalWrite(led_yellow , HIGH );
    delay(800);


  }
  else{
    digitalWrite(buzzer , LOW );
    delay(0);
    digitalWrite(led_red , LOW );
    digitalWrite(led_blue , LOW );
    digitalWrite(led_yellow , LOW );
    delay(0);
  }

}






void setup(){
    //you can run the program only one time 
    Serial.begin(9600) ;//define the buds value 
    pinMode(led_red, OUTPUT); //define the red led output value 
    pinMode(led_yellow , OUTPUT); //define the yelloe led output value 
    pinMode(led_blue, OUTPUT);//define the blue led output value 
    pinMode(buzzer , OUTPUT);//define the buzzer value 
    pinMode(echo_pin , INPUT);
    pinMode(trig_pin , OUTPUT);

    space();
    check_led_buzzer();
    ultrosoinc();
    
    
    



}
void loop(){
    ultrosoinc();



}