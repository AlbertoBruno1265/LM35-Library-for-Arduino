/*****************************************************

  CREATED BY: ALBERTO BRUNO SILVESTRE DE OLIVEIRA

  GITHUB: https://github.com/AlbertoBruno1265/LM35-Library-for-Arduino
  
  LM35.h

*****************************************************/

#ifndef LM35
#define LM35

#include "Arduino.h"

class lm35
{
  private:
    byte _pin;

  public:
    lm35(byte pin);
    byte port();
    float get_temp_c();
    float get_temp_f();
    int get_temp_k();
    float average_temperature(int opt=0, int times=10);
};

#endif
 
