#include "Arduino.h"
#include "LM35_RP.h"

LM35_RP::LM35_RP(int pin)
{
    pinMode(pin, INPUT);
    _pin = pin;
   
}

float LM35_RP::obterCelsius()
{
   float tempC = (float(analogRead(_pin))*5/(1023))/0.01;
   return tempC;
}

float LM35_RP::obterFahrenheit()
{
   float tempF = (((float(analogRead(_pin))*5/(1023))/0.01)*1.8)+32;
   return tempF;
}

float LM35_RP::obterKelvin()
{
   float tempK = ((float(analogRead(_pin))*5/(1023))/0.01)+273.15;
   return tempK;
}
