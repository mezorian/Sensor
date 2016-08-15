#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include <float.h>
// ---
#include "Sensor.h"
#include "TemperatureSensor.h"
#include "AirPressureSensor.h"
#include "DataBuffer.h"
#include "DBInterface.h"


// --- Tests for Sensor

TEST_CASE("readSensor works") {
    // create and init singleton-DBInterface-object
    DBInterface& dbi = DBInterface::getInstance();
    dbi.init();
    // todo
    dbi.writeStatusOK(true);

    // --- TODO -- dummy code ---
    // randomize
    srand(time(NULL));
    // --- TODO -- dummy code ---

    SECTION("readSensor works for temperature-sensor") {
        Sensor Sensor1;
        Sensor1.setSensorType(new TemperatureSensor());
        DataBuffer temperatureSensorBuffer = Sensor1.readSensor();
        REQUIRE(temperatureSensorBuffer.data.size() > 0);
        REQUIRE(temperatureSensorBuffer.data["Lufttemperatur_2m"] > -2000);
        REQUIRE(temperatureSensorBuffer.data["Lufttemperatur_2m"] <  2000);
        REQUIRE(dbi.readStatusOK());
    }

    SECTION("readSensor works for airpressure-sensor") {
        Sensor Sensor1;
        Sensor1.setSensorType(new AirPressureSensor());
        DataBuffer airPressureSensorBuffer = Sensor1.readSensor();
        REQUIRE(airPressureSensorBuffer.data.size() > 0);
        REQUIRE(airPressureSensorBuffer.data["Luftdruck_2m"] > -2000);
        REQUIRE(airPressureSensorBuffer.data["Luftdruck_2m"] <  2000);
        REQUIRE(dbi.readStatusOK());
    }

}
