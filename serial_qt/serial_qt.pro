TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        SerialPort/SerialPort.cpp \
        main.cpp

HEADERS += \
    SerialPort/SerialPort.h
