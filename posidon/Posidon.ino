#include "Constants.h"
#include "Wire.h"
#include "ThermostatController.h"
#include "Clock.h"

void setup() {
  Serial.begin(9600);
  Wire.begin();
  analogReference(INTERNAL);
  pinMode(chillerPin, OUTPUT);
  pinMode(heaterPin, OUTPUT);
}

void loop() {
  controlThermostat();
  delay(1000);
}
