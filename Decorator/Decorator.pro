# 结构型模式-装饰模式

TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG += qt

SOURCES += \
        main.cpp

HEADERS += \
    BaseDecorator.h \
    Component.h \
    ConcreteComponent.h \
    ConcreteDecorator.h
