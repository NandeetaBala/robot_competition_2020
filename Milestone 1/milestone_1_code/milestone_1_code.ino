#include <ZumoShield.h>

ZumoMotors motors;

void setup() {
  // put your setup code here, to run once: set up code not required for this first milestone

}

void loop() {
  // put your main code here, to run repeatedly:
  motors.setLeftSpeed(100);
  motors.setRightSpeed(100);
  delay(4000);
  motors.setLeftSpeed(0);
  motors.setRightSpeed(0);//initially forgot to add this! robot was spinning
  while(true) {

}

}
