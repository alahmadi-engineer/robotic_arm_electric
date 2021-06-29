#include <Servo.h>
int servopin1 = 9;
int servopin2 = 10;
int servopin3 = 11;
int servopin4 = 12;
int servopin5 = 13;
int val; //variable to read the value from the analog pin - potentiometer.
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
val = analogRead(1); //read the value from potentiometer
val = map(val, 0, 1023, 0, 180); //convert to degrees
servo1.write(val);
servo2.write(val);
servo3.write(val);
servo4.write(val);
servo5.write(val);

delay(30); // 50 sec
}
