
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
 
 
void loop() 
{

righthigh.write(85);
leftthigh.write(87);
rightfoot.write(63);
leftfoot.write(59);delay(1000);

righthigh.write(105);
leftthigh.write(107);
rightfoot.write(73);
leftfoot.write(69);delay(1000);

righthigh.write(105);
leftthigh.write(107);
rightfoot.write(90);
leftfoot.write(90);delay(1000);

righthigh.write(85);
leftthigh.write(87);
rightfoot.write(125);
leftfoot.write(120);delay(1000);

righthigh.write(65);
leftthigh.write(67);
rightfoot.write(125);
leftfoot.write(120);delay(1000);

righthigh.write(65);
leftthigh.write(67);
rightfoot.write(93);
leftfoot.write(90);delay(1000);

}
 
