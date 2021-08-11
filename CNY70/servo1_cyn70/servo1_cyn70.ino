#include <Servo.h>

int pinReceptor = A0; //Establecemos el pin a leer
int sensorVal; //Declaramos una variable para almacenar el valor de la lectura
Servo servo1;
int umbralSensor = 4;
int n = 90;
int subir = 1;
int timeOn = 150;

void setup() {
  Serial.begin(9600); // Abrimos comunicación Serial
  analogReference(INTERNAL);
  pinMode(13, OUTPUT);
  servo1.attach(3);
  servo1.write(90);

}

void loop() {
  sensorVal = analogRead(pinReceptor); //Guardamos la lectura del pin Analógico
  Serial.println(sensorVal); //Sacamos la lectura por serial
  while (sensorVal < umbralSensor) {  { // mano moviendose constantemente
    sensorVal = analogRead(pinReceptor);
    if (n <= 0) {
      n = 0;
      subir = 0;
    }
    if (n >= 90){
      n = 90;
      subir = 1;
    }
    servo1.write(n);
    
    if (subir == 1) {
      n--;
    }
    if (subir == 0) {
      n++;
    }
    delay(timeOn);
  }
  if (sensorVal > umbralSensor) {//si encontro algo frena
    digitalWrite(13, HIGH);
  }

}
