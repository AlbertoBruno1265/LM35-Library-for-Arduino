/*****************************************************

  CREATED BY: ALBERTO BRUNO SILVESTRE DE OLIVEIRA

  GITHUB: https://github.com/AlbertoBruno1265/LM35-Library-for-Arduino

  Celsius_Scale.ino

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
  // Calls the temperature method in Celsius
  float temp = Sensor1.get_temp_c();
  
  // Show the value of temperature
  Serial.print("°C: "); Serial.println(temp);
  
  // Wait 1 second to update
  delay(1000);
}
