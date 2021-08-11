#include <Servo.h>
Servo myservo;
int val = 90;

void setup() {
  myservo.attach(3);
}

void loop() {
  myservo.write(val);
  delay(100);
  val--;
  if (val == 0) {
    val = 90;
    delay(100);
  }

}
