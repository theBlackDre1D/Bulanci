QT += core network gui widgets

TARGET = Bulanci
TEMPLATE = app

DEFINES += QT_DEPRECATED_WARNINGS

SOURCES += \
        main.cpp \
    server.cpp \
    player.cpp \
    serverClient.cpp \
    client.cpp

HEADERS += \
    defines.h \
    server.h \
    player.h \
    serverClient.h \
    client.h
