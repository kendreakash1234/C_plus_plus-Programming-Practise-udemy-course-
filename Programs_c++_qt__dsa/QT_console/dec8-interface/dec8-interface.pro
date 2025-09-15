#-------------------------------------------------
#
# Project created by QtCreator 2022-12-08T16:02:26
#
#-------------------------------------------------

QT       += core

QT       -= gui

TARGET = dec8-interface
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp \
    appliance.cpp

HEADERS += \
    Toaster.h \
    Freezer.h \
    Microwave.h \
    appliance.h
