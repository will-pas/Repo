#include"luminaria.h"

float corrente;
luminaria leitura;

void setup()
{
 Serial.begin(9600);
 pinMode(33,INPUT_ANALOG);   // STM32
 //pinMode(A0,INPUT);        // Arduino Uno
}

void loop()
{
  corrente=leitura.leitura_tensao();
  Serial.print("Corrente = ");
  Serial.print(corrente);
  Serial.println("A");
}
