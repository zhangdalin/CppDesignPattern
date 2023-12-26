# 行为型模式-迭代器模式

TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp

HEADERS += \
    Collection.h \
    ConcreteCollection.h \
    ConcreteIterator.h \
    Iterator.h
