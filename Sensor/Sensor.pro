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


SOURCES += main.cpp \
    src/AirPressureSensor.cpp \
    src/Sensor.cpp \
    src/TemperatureSensor.cpp \
    src/DataBuffer.cpp

HEADERS += \
    include/AirPressureSensor.h \
    include/Sensor.h \
    include/SensorType.h \
    include/TemperatureSensor.h \
    include/DataBuffer.h
