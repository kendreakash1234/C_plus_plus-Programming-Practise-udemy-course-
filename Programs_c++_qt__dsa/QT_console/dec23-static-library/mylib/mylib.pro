#-------------------------------------------------
#
# Project created by QtCreator 2022-12-23T10:47:55
#
#-------------------------------------------------

QT       -= gui

TARGET = mylib
TEMPLATE = lib
CONFIG += staticlib

SOURCES += mylib.cpp

HEADERS += mylib.h
unix {
    target.path = /usr/lib
    INSTALLS += target
}
