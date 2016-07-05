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

TEMPLATE = app


SOURCES += main.cpp \
    src/sensor.cpp \
    src/temperaturesensor.cpp \
    src/airpressuresensor.cpp

HEADERS += \
    include/sensor.h \
    include/sensortype.h \
    include/temperaturesensor.h \
    include/airpressuresensor.h
