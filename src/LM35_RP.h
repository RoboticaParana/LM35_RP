#ifndef LM35_h
#define LM35_h
#include "Arduino.h"


class LM35_RP
{
   public:
       LM35_RP(int _pin);
       float obterCelsius();
       float obterFahrenheit();
       float obterKelvin();

   private:
       int _pin;

};


#endif
