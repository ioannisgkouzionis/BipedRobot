
#include <Servo.h> 
Servo rightfoot;
Servo righthigh;
Servo leftfoot;
Servo leftthigh;
Servo test;
int pos;
void setup() 
{ 
rightfoot.attach(3);
righthigh.attach(5);
leftfoot.attach(7);
leftthigh.attach(9);
test.attach(11);

righthigh.write(85);
leftthigh.write(87);
rightfoot.write(93);
leftfoot.write(90);
}

void loop() {
  // put your main code here, to run repeatedly:
  test.write(0);delay (500);
  test.write(90);delay (500);
  test.write(180);delay (500);
}
