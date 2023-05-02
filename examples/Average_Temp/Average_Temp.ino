/*****************************************************

  CREATED BY: ALBERTO BRUNO SILVESTRE DE OLIVEIRA

  GITHUB: https://github.com/AlbertoBruno1265/LM35-Library-for-Arduino

  Average_Temp.ino

*****************************************************/

// Import the library
#include <LM35.h>

// Instance the object
lm35 Sensor1(A0);

void setup() {
  // Open Serial communication
  Serial.begin(9600);
}

void loop() {
  // Sensor1.average_temperature(int opt, int times)
  // 
  // opt: Temperature scale
  // 0: Celsius
  // 1: Fahrenheit
  // 2: Kelvin
  //  
  // times: Number of times the temperature will be checked
  //
  // Calls the average_temperature() method
  float tempC = Sensor1.average_temperature(0, 10);
  float tempF = Sensor1.average_temperature(1, 10);
  float tempK = Sensor1.average_temperature(2, 10);
  
  // Shows the average temperature on their respective scales
  Serial.print("°C: "); Serial.println(tempC);
  Serial.print("°F: "); Serial.println(tempF);
  Serial.print(" K: "); Serial.println(tempK);
  
  // Wait 1 second to update
  delay(1000);
}
