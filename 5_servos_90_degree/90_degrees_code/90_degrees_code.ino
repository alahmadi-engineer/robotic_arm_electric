#include <Servo.h>
int servopin1 = 9;
int servopin2 = 10;
int servopin3 = 11;
int servopin4 = 12;
int servopin5 = 13;
int servoPos= 90;
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
servo1.attach(servopin1);
servo2.attach(servopin2);
servo3.attach(servopin3);
servo4.attach(servopin4);
servo5.attach(servopin5);

}

void loop() {
  // put your main code here, to run repeatedly:
servo1.write(servoPos);
servo2.write(servoPos);
servo3.write(servoPos);
servo4.write(servoPos);
servo5.write(servoPos);
}
