/**
 * TemperatureSensor.cpp
 * Purpose: implements class TemperatureSensor
 *
 * @author Wall.Of.Death
 * @version 1.0 20160705
 */

#include "TemperatureSensor.h"

/**
 * TemperatureSensor::readSensor
 * @brief readSensor() returns the current temperature measured by the temperature-sensor
 * @return a Databuffer which contains temperature value in degree celsius, measured by the temperature-sensor
 */
DataBuffer TemperatureSensor::readSensor() {
    DataBuffer result;
    result.dataSource = "WeatherStation";
    result.useDataSource = true;

    // --- TODO -- dummy code ---
    cout << "read Temperature sensor" << endl;
    result.data["Lufttemperatur_2m"] = rand() % 60;
    // --- TODO -- dummy code ---

    return result;
}
