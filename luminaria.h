// Arquivo: luminaria.h
#ifndef __LUMINARIA_H__
#define __LUMINARIA_H__

#include <Arduino.h>

class luminaria
{
  public:
         int leitura_tensao();

  private:
          float vetCorrente[720];
          double maior_Valor = 0;
          double valor_Corrente = 0;
};
// ***  realiza a leitura da tensão analógica e retorna o valor da corrente;

#endif
