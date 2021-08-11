#include <Ultrasonic.h>
#include <Servo.h>

  
//declaramos un objeto ultrasonic de la la librería Ultrasonic para referirnos a ella.  
//el trigger asignado a la entrada digital 7, y echo asignado a la entrada analógica 7
Ultrasonic ultrasonic(7,A0);      
  
//declaramos un objeto miservo de la la libreria Servo para referirnos a ella.  
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;
    
int Distancia;  
  
void setup(){  
    Serial.begin(9600); // me sirve para print
    //definimos el pin2 para controlar el servo  
    servo1.attach(3);
    servo2.attach(5);
    servo3.attach(6);
    servo4.attach(9);
    servo5.attach(10);  
  
    // coloca el servo en su posición central  
    servo1.write(0);   
    servo2.write(0);  
    servo3.write(0);  
    servo4.write(0);  
    servo5.write(0); 
    delay(1000);  
    servo1.write(90); 

} 

 void loop(){}
  
