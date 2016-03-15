#include "Constants.h"
#include "ThermostatController.h"

void setup() {
  Serial.begin(9600);
  analogReference(INTERNAL);
  pinMode(chillerPin, OUTPUT);
  pinMode(heaterPin, OUTPUT);
}

void loop() {
  controlThermostat();
  delay(1000);
}
