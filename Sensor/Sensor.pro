#-------------------------------------------------
#
# Project created by QtCreator 2016-07-05T11:43:11
#
#-------------------------------------------------

QT       += core

QT       -= gui

TARGET = Sensor
CONFIG   += console
CONFIG   -= app_bundle
CONFIG   += c++11

TEMPLATE = app

INCLUDEPATH += include/
INCLUDEPATH += ../include/

LIBS += -lcurl


SOURCES += \
    src/AirPressureSensor.cpp \
    src/Sensor.cpp \
    src/TemperatureSensor.cpp \
    src/DataBuffer.cpp \
    test/main.cpp \
    src/DBInterface.cpp \
    src/HTTPRequest.cpp \
    src/LogWriter.cpp \
    src/SLevel.cpp \
    main_old.cpp \
    src/Third-Party-Code/DS18B20.cpp

HEADERS += \
    include/AirPressureSensor.h \
    include/Sensor.h \
    include/SensorType.h \
    include/TemperatureSensor.h \
    include/DataBuffer.h \
    include/catch.hpp \
    include/Config.h \
    include/DBInterface.h \
    include/HTTPRequest.h \
    include/LogWriter.h \
    include/SLevel.h
