# 创建型模式-抽象工厂模式

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
