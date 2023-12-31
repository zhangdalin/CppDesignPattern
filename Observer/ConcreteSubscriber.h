#ifndef CONCRETE_SUBSCRIBER_H_
#define CONCRETE_SUBSCRIBER_H_

#include <iostream>
#include "Subscriber.h"

#include <QDebug>

// 具体观察者1: 老鼠
class Mouse : public AbstractObserver {
public:
    void response() override {
        qDebug("老鼠逃跑");
    }
};

// 具体观察者2: 狗
class Dog : public AbstractObserver {
public:
    void response() override {
        qDebug("狗追猫");
    }
};


#endif  // CONCRETE_SUBSCRIBER_H_
