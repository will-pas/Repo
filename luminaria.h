// Arquivo: luminaria.h
#ifndef __LUMINARIA_H__
#define __LUMINARIA_H__

#include <Arduino.h>

class luminaria
{
  public:
         float leitura_tensao();

  private:
          float vetCorrente[720];     // STM32
          //float vetCorrente[320];   // Arduino Uno
          float maior_Valor = 0;
          float valor_Corrente = 0;
};
// ***  realiza a leitura da tensão analógica e retorna o valor da corrente;

#endif
