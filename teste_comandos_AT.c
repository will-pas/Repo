#include <SoftwareSerial.h>


#define TX_PIN 10
#define RX_PIN 11


SoftwareSerial softSerial(TX_PIN, RX_PIN);


void setup(){
  //Terminal para debug
  Serial.begin(9600);
  while (!Serial);


  //Comunicacao com o SIM800L
  softSerial.begin(4800);
  delay(1000);


  Serial.println("Debugging SIM800L!");
}


void loop(){
  //Print dos dados recebidos pelo modulo
  if (softSerial.available()){
    Serial.write(softSerial.read());
  }

  //Envio de comandos AT para o modulo
  if (Serial.available()){
    softSerial.write(Serial.read());
  }
}