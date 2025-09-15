#-------------------------------------------------
#
# Project created by QtCreator 2022-12-23T10:30:59
#
#-------------------------------------------------

QT       -= gui

TARGET = dec23-mylib
TEMPLATE = lib

DEFINES += DEC23MYLIB_LIBRARY

SOURCES += dec23mylib.cpp

HEADERS += dec23mylib.h\
        dec23-mylib_global.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
