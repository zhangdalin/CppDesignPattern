TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG += qt

SOURCES += \
        main.cpp

HEADERS += \
    AbstractFactory.h \
    AbstractProduct.h \
    ConcreteFactory.h \
    ConcreteProduct.h
