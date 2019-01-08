#-------------------------------------------------
#
# Project created by QtCreator 2019-01-02T15:34:36
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Bulanci
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0
QT += network

SOURCES += \
        main.cpp \
    bullet.cpp \
    player.cpp \
    hud.cpp \
    client.cpp \
    mythread.cpp \
    myserver.cpp

HEADERS += \
    bullet.h \
    player.h \
    direction.h \
    defines.h \
    hud.h \
    client.h \
    mythread.h \
    myserver.h
