#include "Arduino.h"
#include "Constants.h"
#include "ThermostatController.h"

float temperature = 0;
int ADCRead = 0;
float minTemperature = 27.6;
float maxTemperature = 29.0;

float readTemperature() {
  ADCRead = analogRead(LM35Sensor);
  temperature = ADCRead * 0.1075268817204301;
  return temperature;
}

void displayTemperature(float temperature) {  
  Serial.println(String(temperature) + " *C");
}

void controlThermostat() {
  float currentTemperature;
  currentTemperature = readTemperature();

  if (currentTemperature > maxTemperature) {
    digitalWrite(chillerPin, HIGH);
  } else {
    digitalWrite(chillerPin, LOW);
  }

  if (currentTemperature < minTemperature) {
    digitalWrite(heaterPin, HIGH);
  } else {
    digitalWrite(heaterPin, LOW);
  }
  
  displayTemperature(currentTemperature);
}


