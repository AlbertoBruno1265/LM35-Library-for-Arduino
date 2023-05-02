/*****************************************************

  CREATED BY: ALBERTO BRUNO SILVESTRE DE OLIVEIRA

  GITHUB: AlbertoBruno1265

  LM35.h

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
  float temp = Sensor1.get_temp_c();
  Serial.print("°C: "); Serial.println(temp);
  delay(1000);
}
