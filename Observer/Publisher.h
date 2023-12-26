#ifndef PUBLISHER_H_
#define PUBLISHER_H_

#include <vector>
#include <iostream>
#include "Subscriber.h"

#include <QDebug>

class Cat {
public:
    // 注册观察者
    void attach(AbstractObserver* observer) {
        observers_.push_back(observer);
    }

    // 注销观察者
    void detach(AbstractObserver* observer) {
        for (auto it = observers_.begin(); it !=observers_.end(); it++) {
            if (*it == observer) {
                observers_.erase(it);
                break;
            }
        }
    }

    void cry() {
        qDebug("猫叫!");
            for (auto ob : observers_) {
            ob->response();
        }
    }

private:
    std::vector<AbstractObserver*> observers_;
};

#endif  // PUBLISHER_H_
