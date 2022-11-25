#include <Arduino.h>
#define pinPIR 13
#define buzzer 5
#define pinPIR2 4
#define lampada 0


bool porta = false;
bool mesa = false;
bool controle = false;
bool controle2 = false;
int contador = 0;


void setup() {
  pinMode(buzzer, OUTPUT);
  pinMode(pinPIR, INPUT);
  pinMode(pinPIR2, INPUT);
  pinMode(lampada, OUTPUT);
  digitalWrite(lampada, LOW);
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
            digitalWrite(lampada, HIGH);
            delay(5000);
            digitalWrite(buzzer, LOW);
            digitalWrite(lampada, LOW);
            
            


            controle = false;
            mesa =false;
            porta = false;
            controle2 = false;
            contador = 0;
            }
            if(valorPIR2 == false){
               digitalWrite(buzzer, HIGH);
               delay(200);
               digitalWrite(buzzer, LOW);
               delay(200);
               digitalWrite(buzzer, HIGH);
               delay(200);
               digitalWrite(buzzer, LOW);
               contador = contador + 1;


               controle = false;
               mesa =false;
               porta = false;
               controle2 = false;
            }
            }
            
            bool valorPIR = digitalRead(pinPIR);
            if(contador == 1 && valorPIR == false){
               Serial.print('Contador');

               digitalWrite(buzzer, HIGH);
               delay(200);
               digitalWrite(buzzer, LOW);
               delay(200);

               delay(600);

               contador = 0;
            }
         

      }

      



