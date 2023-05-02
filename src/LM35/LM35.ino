#include "LM35.h"

lm35 Sensor1(A0);

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println("----------------------------------------");
  Serial.print("°C: "); Serial.println(Sensor1.get_temp_c());
  Serial.print("°F: "); Serial.println(Sensor1.get_temp_f());
  Serial.print("°K: "); Serial.println(Sensor1.get_temp_k());
  delay(1000);  
  Serial.println("----------------------------------------");
  Serial.print("Avarage °C: "); Serial.println(Sensor1.average_temperature(0));
  Serial.print("Avarage °F: "); Serial.println(Sensor1.average_temperature(1));
  Serial.print("Avarage °K: "); Serial.println(Sensor1.average_temperature(2));
  delay(1000);
}
