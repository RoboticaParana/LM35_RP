/* Inclui a biblioteca.                      */
#include <LM35_RP.h>
/* Cria um objeto de controle para o sensor  */
/* conectado na porta analógica A0.          */
LM35_RP lm35(A0);
 
void setup() {
  /* Inicia a comunicação serial.            */
  Serial.begin(9600); 
}
 
void loop() {
  /* Imprime no monitor serial a temperatura */
  /* nas escalas Celsius, Fahrenheit e Kelvin*/
  Serial.print("Temperatura: ");
  Serial.print(lm35.obterCelsius());
  Serial.print("ºC\t");   
  Serial.print(lm35.obterFahrenheit());
  Serial.print("F\t");
  Serial.print(lm35.obterKelvin());
  Serial.println("K");
  /* Imprime uma linha em branco.            */
  Serial.println(" ");
  /* Delay antes de realizar uma nova leitura*/ 
  delay(1000);
}
