#-------------------------------------------------
#
# Project created by QtCreator 2016-07-09T18:03:09
#
#-------------------------------------------------

QT       += core gui network



greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = qt_client
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    fenetre_information.cpp

HEADERS  += mainwindow.h \
    fenetre_information.h

FORMS    += mainwindow.ui \
    fenetre_information.ui


