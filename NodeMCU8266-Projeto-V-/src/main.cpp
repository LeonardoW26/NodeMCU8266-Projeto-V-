#include <Arduino.h>
#define pinPIR 13
#define buzzer 5
#define pinPIR2 15

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
     digitalWrite(buzzer, HIGH);
     tone(buzzer,50);
  }

  bool valorPIR2 = digitalRead(pinPIR2);
  if (valorPIR2) {
     Serial.println("-------");
     digitalWrite(buzzer, LOW);
  } else {
     Serial.println("DETECTADO");
     digitalWrite(buzzer, HIGH);
     tone(buzzer,50);
  }

}
