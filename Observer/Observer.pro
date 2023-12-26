# 行为型模式-观察者模式

TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG += qt

SOURCES += \
        main.cpp

HEADERS += \
    ConcreteSubscriber.h \
    Publisher.h \
    Subscriber.h
