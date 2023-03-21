#include <Arduino.h>
#include "batteryMeasurment.h"

BatteryMeasurment battery(A0);
void setup() {
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:

  int batteryLevel = battery.getBatteryLevel();
  int batteryVoltage = battery.getBatteryVoltage();
  char buffer[30];
  sprintf(buffer, "Battery: %d% (%dV)", batteryLevel, batteryVoltage);
  Serial.println(buffer);
}