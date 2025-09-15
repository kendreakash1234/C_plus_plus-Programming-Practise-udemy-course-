#-------------------------------------------------
#
# Project created by QtCreator 2023-01-06T17:59:42
#
#-------------------------------------------------

QT       += core network  concurrent

QT       -= gui

TARGET = QUDPSocketChatExample
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp \
    chat.cpp \
    commandline.cpp

HEADERS += \
    chat.h \
    commandline.h
