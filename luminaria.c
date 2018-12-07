#include"luminaria.h"

float corrente;
luminaria leitura;

void setup()
{
 Serial.begin(9600);
 pinMode(A0,INPUT);              // Arduino Uno
 //pinMode(33,INPUT_ANALOG);     // STM32
}

void loop()
{
  corrente=leitura.leitura_tensao();
  Serial.print("Corrente = ");
  Serial.println(corrente);
  Serial.println(" A");
}
