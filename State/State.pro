# 行为型模式-状态模式

TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG += qt

SOURCES += \
        ConcreteState.cpp \
        Context.cpp \
        main.cpp

HEADERS += \
    ConcreteState.h \
    Context.h \
    State.h
