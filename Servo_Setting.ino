#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;

int pos1=0;
int pos2=0;
int pos3=0;
int pos4=0;
int pos5=0;

void setup(){
servo1.attach(8);
servo2.attach(9);
servo3.attach(10);
servo4.attach(11);
servo5.attach(12);
}

void loop()
{
servo1.write(0);
delay(500);
servo1.write(90);
delay(500);

servo2.write(0);
delay(500);
servo2.write(90);
delay(500);

servo3.write(0);
delay(500);
servo3.write(90);
delay(500);

servo4.write(0);
delay(500);
servo4.write(90);
delay(500);

servo5.write(0);
delay(500);
servo5.write(90);
delay(500);
}
