#include"luminaria.h"

float luminaria::leitura_tensao()
{

  //lê uma amostragem a cada 5° durante um período
  for(int i = 0; i < 320; i++)
  {
    vetCorrente[i] = analogRead(A0);
    delayMicroseconds(650);        // 230us equivale a 5°
  }

  // encontra o maior valor das amostras (valor de pico)
  for(int i = 0; i < 320; i++)
  {
    if(maior_Valor < vetCorrente[i])
    {
      maior_Valor = vetCorrente[i];
    }
  }

  maior_Valor = maior_Valor * 0.00489;        // (0,1023)->(0,5)    Arduino Uno
  //Serial.println(maior_Valor);
  //maior_Valor = maior_Valor * 0.00122       // (0,4095)->(0,5)    STM32
  valor_Corrente = maior_Valor - 2.5;         // diminui o valor de offset
  //Serial.println(valor_Corrente);
  valor_Corrente = valor_Corrente*20;         // (0,1V)->(0,20A)
  valor_Corrente = valor_Corrente/1.41421356; // Vp->Vrms

  return valor_Corrente;
}
