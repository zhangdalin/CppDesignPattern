# 结构型模式-桥接模式

TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG += qt

SOURCES += \
        main.cpp

HEADERS += \
    Abstraction.h \
    ConcreteImplementation.h \
    Implementation.h \
    RefinedAbstraction.h
