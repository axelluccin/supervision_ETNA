QT += core
QT -= gui
QT += network

TARGET = test
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    helloworldcontroller.cpp \
    information_windows.cpp \

OTHER_FILES += etc/test.ini

include(httpserver.pri)

HEADERS += \
    helloworldcontroller.h \
    information_windows.h \
