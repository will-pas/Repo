include"luminaria.h"

float vetCorrente[720];
double maior_Valor = 0;
double valor_Corrente = 0;

void setup()
{
 Serial.begin(9600);
 pinMode(33,INPUT_ANALOG);
}

void loop()
{
  valor_Corrente=leitura_tensao();
  Serial.print("Corrente = ");
  Serial.print(valor_Corrente);
  Serial.println(" A");
}
