TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG += qt

SOURCES += \
        main.cpp \
        singleton.cpp \
        threadsafesingleton.cpp

HEADERS += \
    cpp11_sigleton.h \
    singleton.h \
    threadsafesingleton.h
