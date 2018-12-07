
#include <Servo.h> 
Servo rightfoot;
Servo righthigh;
Servo leftfoot;
Servo leftthigh;

void setup() 
{ 
rightfoot.attach(3);
righthigh.attach(5);
leftfoot.attach(7);
leftthigh.attach(9);

righthigh.write(85);
leftthigh.write(87);
rightfoot.write(93);
leftfoot.write(90);
} 

void loop() {

righthigh.write(85);
leftthigh.write(87);
rightfoot.write(63);
leftfoot.write(59);delay(500);

righthigh.write(85);
leftthigh.write(112);
rightfoot.write(63);
leftfoot.write(59);delay(500);

righthigh.write(85);
leftthigh.write(112);
rightfoot.write(93);
leftfoot.write(90);delay(500);

rightfoot.write(123);
leftfoot.write(120);delay(50);
righthigh.write(105);
leftthigh.write(87);delay(500);

rightfoot.write(93);
leftfoot.write(90);delay(50);
righthigh.write(105);
leftthigh.write(87);delay(500);



}
