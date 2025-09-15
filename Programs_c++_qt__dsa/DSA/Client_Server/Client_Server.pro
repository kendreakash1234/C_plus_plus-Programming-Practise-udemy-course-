#-------------------------------------------------
#
# Project created by QtCreator 2023-03-03T15:28:00
#
#-------------------------------------------------

QT       += core network

QT       -= gui

TARGET = Client_Server
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp \
    client.cpp \
    server.cpp

HEADERS += \
    client.h \
    server.h
