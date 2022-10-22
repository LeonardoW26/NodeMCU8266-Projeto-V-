#include <Arduino.h>
#define pinPIR 13
#define buzzer 5
#define pinPIR2 15

bool porta = false;
bool mesa = false;


void setup() {
  pinMode(buzzer, OUTPUT);
  pinMode(pinPIR, INPUT);
  Serial.begin(9600);
}
 
void loop() {
  bool valorPIR = digitalRead(pinPIR);
  if (valorPIR) {
     Serial.println("-------");
     digitalWrite(buzzer, LOW);
  } else {
     Serial.println("DETECTADO");
     porta = true;
  }
  
   bool valorPIR2 = digitalRead(pinPIR2);
   if(valorPIR2 == true){
      mesa = false;
      if (valorPIR2) {
         Serial.println("-------");
     
  } else {
     Serial.println("DETECTADO");
     mesa = true;
  }
   }

   if (valorPIR == true && mesa == false){
      porta = false;
      Serial.println(porta);
   }
   
   if(valorPIR == true && mesa == true){
      digitalWrite(buzzer, LOW);
      Serial.println(porta);
   }else{
      digitalWrite(buzzer, HIGH);
   }

}
