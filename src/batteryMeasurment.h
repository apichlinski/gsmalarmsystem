#ifndef BATTERYMEASURMENT_H
#define BATTERYMEASURMENT_H
#define LIPO_MAX_VOLTAGE 4.2;
#define LIPO_MIN_VOLTAGE 3.6;

#include <Arduino.h>


class BatteryMeasurment {
    public: 
        BatteryMeasurment(int pin);
        int getBatteryVoltage();
        int getBatteryLevel();
    private:
        void getRefreshData();
        int voltage = 0;
        int level = 0;
        int pin;
};

#endif