#include <Servo.h>

int servoPin = 3;

Servo servo1;

void setup() {
  servo1.attach(servoPin);
}

void loop() {
  servo1.write(30);
  delay(1000);
  servo1.write(-60);
  delay(1000);
}
