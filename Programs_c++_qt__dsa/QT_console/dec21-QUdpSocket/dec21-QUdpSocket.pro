#-------------------------------------------------
#
# Project created by QtCreator 2022-12-21T10:22:20
#
#-------------------------------------------------

QT       += core

QT       -= gui

TARGET = dec21-QUdpSocket
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app

QT += network
QT += webkit

SOURCES += main.cpp \
    worker.cpp

HEADERS += \
    worker.h
