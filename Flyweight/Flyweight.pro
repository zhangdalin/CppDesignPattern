# 结构型模式-享元模式

TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        FlyweightFactory.cpp \
        main.cpp

HEADERS += \
    Client.h \
    Context.h \
    Flyweight.h \
    FlyweightFactory.h
