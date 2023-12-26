# 行为型模式-策略模式

TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG += qt

SOURCES += \
        main.cpp

HEADERS += \
    ConcreteStrategy.h \
    Context.h \
    Strategy.h
