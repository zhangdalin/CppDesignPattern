# 创建型模式-生成器模式 (创造器模式)

TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp

HEADERS += \
    Builder.h \
    ConcreteBuilder.h \
    Director.h \
    Product.h
