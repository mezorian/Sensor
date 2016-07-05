/**
 * TemperatureSensor.h
 * Purpose: defines class TemperatureSensor
 *
 * @author Wall.Of.Death
 * @version 1.0 20160705
 */


#ifndef TEMPERATURESENSOR_H
#define TEMPERATURESENSOR_H

// --- TODO -- dummy code ---
#include <iostream>
#include <stdlib.h>

using namespace std;
// --- TODO -- dummy code ---

#include "sensortype.h"

/**
 * TemperatureSensor class
 * @brief The TemperatureSensor class provides an implementation of readSensor() for the Sensor TODO
 * The TemperatureSensor class is an implementation of the interface SensorType and implements the function readSensor().
 * The design of it is based on the design pattern 'strategy'.
 * In respect of this the TemperatureSensor-class is a so called 'ConcreteStrategy' within the Strategy-Pattern.
 */
class TemperatureSensor : public SensorType {
    public:
        /* --- constructor --- */
        TemperatureSensor() {};

        /* --- measuring --- */
        double readSensor();
};

#endif // TEMPERATURESENSOR_H
