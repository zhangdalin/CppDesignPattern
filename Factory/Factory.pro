# 创建型模式-工厂模式

TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG += qt

SOURCES += \
        main.cpp

HEADERS += \
    ConcreteCreator.h \
    ConcreteProduct.h \
    Creator.h \
    Product.h
