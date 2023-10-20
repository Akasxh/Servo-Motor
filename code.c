#include <Servo.h>
Servo myservo;
int potPin = A0;

void setup() {
myservo.attach(9);
}

void loop() {
 int potVal = analogRead(potPin);
 int angle = map(potVal, 0, 1023, 0, 180);
myservo.write(angle);
 delay(15);
}
