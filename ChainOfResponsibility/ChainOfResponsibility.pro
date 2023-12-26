# 行为型模式-责任链模式

TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG += qt

SOURCES += \
        main.cpp

HEADERS += \
    BaseHandler.h \
    ConcreteHandler.h \
    Handler.h
