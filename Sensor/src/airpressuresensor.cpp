/**
 * AirPressureSensor.cpp
 * Purpose: implements class AirPressureSensor
 *
 * @author Wall.Of.Death
 * @version 1.0 20160705
 */

#include "../include/airpressuresensor.h"

/**
 * AirPressureSensor::readSensor
 * @brief readSensor() returns the current air pressure measured by the sensor TODO
 * @return a double value in hektopascal, measured by the sensor TODO
 */
double AirPressureSensor::readSensor() {
    // --- TODO -- dummy code ---
    cout << "read AirPressure sensor" << endl;
    return (rand() % 400) + 800 ;
    // --- TODO -- dummy code ---
}
