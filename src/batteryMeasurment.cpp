#include "batteryMeasurment.h"

BatteryMeasurment::BatteryMeasurment(int pin) {
    BatteryMeasurment::pin=pin;
}

void BatteryMeasurment::getRefreshData() {
    int value = analogRead(BatteryMeasurment::pin);
    BatteryMeasurment::voltage = value * 5.0/1023;
    int voltageMin = LIPO_MIN_VOLTAGE;
    int voltageMax = LIPO_MAX_VOLTAGE;
    BatteryMeasurment::level = map(voltage, voltageMin, voltageMax, 0, 100);
}

int BatteryMeasurment::getBatteryLevel() {
    getRefreshData();
    return level;
}

int BatteryMeasurment::getBatteryVoltage() {
    getRefreshData();
    return voltage;
}