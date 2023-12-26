# 行为型模式-访问者模式

TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG += qt

SOURCES += \
        main.cpp

HEADERS += \
    Client.h \
    ConcreteElement.h \
    ConcreteVisitor.h \
    Element.h \
    Visitor.h
