#include <Arduino.h>
#define pinPIR 13
#define buzzer 5
#define pinPIR2 4

bool porta = false;
bool mesa = false;
bool controle = false;
bool controle2 = false;

void setup() {
  pinMode(buzzer, OUTPUT);
  pinMode(pinPIR, INPUT);
  pinMode(pinPIR2, INPUT);
  Serial.begin(9600);
}
 
void loop() {
   if(controle2 == false){
      if (porta == false){
         bool valorPIR = digitalRead(pinPIR);
         Serial.println("Sensor porta");
      Serial.println(valorPIR);
         if(valorPIR == false){
            digitalWrite(buzzer, HIGH);
            delay(1000);
            digitalWrite(buzzer, LOW);
            porta = true;
         }
      }
      if(porta == true){
         Serial.println("sensor mesa");
         bool valorPIR2 = digitalRead(pinPIR2);
         if(valorPIR2 == false){
            digitalWrite(buzzer, HIGH);
            delay(1000);
            digitalWrite(buzzer, LOW);
            mesa = true;
            controle = true;
            controle2 = true;
         }

      }
   }
      if(controle == true){
         Serial.print("CONTROLE");
         bool valorPIR = digitalRead(pinPIR);
         bool valorPIR2 = digitalRead(pinPIR2);
            if(valorPIR2 == true && valorPIR == false){
            digitalWrite(buzzer, HIGH);
            delay(5000);
            digitalWrite(buzzer, LOW);

            controle = false;
            mesa =false;
            porta = false;
            controle2 = false;
            }
            if(valorPIR2 == false){
               digitalWrite(buzzer, HIGH);
               delay(200);
               digitalWrite(buzzer, LOW);
               delay(200);
               digitalWrite(buzzer, HIGH);
               delay(200);
               digitalWrite(buzzer, LOW);
               
               controle = false;
               mesa =false;
               porta = false;
               controle2 = false;
            }
            }
         

      }

      


/*if (porta == true){
         bool valorPIR = digitalRead(pinPIR);
         Serial.println("Sensor mesa");
      Serial.println(valorPIR);
         if(valorPIR == false){
            digitalWrite(buzzer, HIGH);
            delay(1000);
            digitalWrite(buzzer, LOW);
            mesa = false;
         }
      }
      if(porta == false){
         Serial.println("sensor porta");
         bool valorPIR2 = digitalRead(pinPIR2);
         if(valorPIR2 == false){
            digitalWrite(buzzer, HIGH);
            delay(1000);
            digitalWrite(buzzer, LOW);
            porta = false;
         }
      }*/



