/*****************************************************

  CREATED BY: ALBERTO BRUNO SILVESTRE DE OLIVEIRA

  GITHUB: https://github.com/AlbertoBruno1265/LM35-Library-for-Arduino

  LM35.cpp

*****************************************************/

#include "Arduino.h"
#include "LM35.h"

lm35::lm35(byte pin){
  _pin = pin;
}

byte lm35::port(){
  return _pin;
}

float lm35::get_temp_c(){
  float temperatureC = (analogRead(_pin)*(5.0/1023)) / 0.01;
  return temperatureC;
}


float lm35::get_temp_f(){
  float temperatureF = (lm35::get_temp_c() * 9 / 5) + 32;
  return temperatureF;
}


int lm35::get_temp_k(){
  int temperatureK = lm35::get_temp_c() - 273;
  return temperatureK;
}

float lm35::average_temperature(int opt=0, int times=10){
  float sum = 0;

  for (int i=0; i<times; i++){
    switch (opt) {
      case 0: sum += lm35::get_temp_c(); break;
      case 1: sum += lm35::get_temp_f(); break;
      case 2: sum += lm35::get_temp_k(); break;
    }
  }
  return sum/=times;
}
