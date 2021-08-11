#include <Servo.h>
Servo myservo;
int valServo = 90;
int valCNY70;

void setup() {
  Serial.begin(9600);
  myservo.attach(3);
}

void loop() {
  Serial.println(analogRead(0));

  valCNY70 = analogRead(0);

  if (valCNY70 > 200) {
    myservo.write(valServo);
    delay(100);
  } else {
    myservo.write(valServo);
    delay(100);
    valServo--;
    if (valServo == 0) {
                                    //      for (int i = 0; i < 90; i++) { esto lo habia pensado para que la mano vuelva
                                    //        myservo.write(i);           sin pegar el latigazo, pero no sé cómo hacer
                                    //        delay(25);                  para que sense en ese retroceso
                                    //      }
      valServo = 90;
    }
  }


}
