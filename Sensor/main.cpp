#include <iostream>
#include "Sensor.h"
#include "TemperatureSensor.h"
#include "AirPressureSensor.h"

int main() {
    // --- TODO -- dummy code ---
    // randomize
    srand(time(NULL));
    // --- TODO -- dummy code ---

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
