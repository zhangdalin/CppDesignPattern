# 行为型模式-命令模式

TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG += qt

SOURCES += \
        main.cpp

HEADERS += \
    Command.h \
    ConcreteCommand.h \
    Invoker.h \
    Receiver.h
