// C++ code
#include<Servo.h>
Servo s1;
Servo s2;
//
void setup()
{
s1.attach(6);
s2.attach(5);
}

void loop()
{
 s1.write(180);
  delay(1000);
  s1.write(0);
  delay(1000);
  s2.write(180);
  delay(1000);
  s2.write(0);
  delay(1000);
}