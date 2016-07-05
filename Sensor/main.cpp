#include <iostream>
#include "include/sensor.h"
#include "include/temperaturesensor.h"
#include "include/airpressuresensor.h"

int main() {
    Sensor Sensor1;
    Sensor1.setSensorType(new TemperatureSensor());
    cout << "created temperature sensor " << endl;
    cout << "TemperatureSensor.read == " << Sensor1.readSensor() << endl;
    SensorType *ST = Sensor1.getSensorType();


    Sensor Sensor2;
    Sensor2.setSensorType(new AirPressureSensor());
    cout << "created airpressure sensor " << endl;
    cout << "AirPressureSensor.read == " << Sensor2.readSensor() << endl;


}
