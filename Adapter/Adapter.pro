# 结构型模式-适配器模式

TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp

HEADERS += \
    Adapter.h \
    Client.h \
    ClientInterface.h \
    Service.h
