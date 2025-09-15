#-------------------------------------------------
#
# Project created by QtCreator 2022-12-22T12:36:14
#
#-------------------------------------------------

QT       += core

QT       -= gui

TARGET = dec22-QNetworkAccessManager
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app

QT += network
SOURCES += main.cpp \
    worker.cpp

HEADERS += \
    worker.h
