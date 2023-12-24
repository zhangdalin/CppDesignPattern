#ifndef CPP11_SIGLETON_H
#define CPP11_SIGLETON_H

#include <QDebug>

template<typename T>
class Cpp11Singleton{
public:
    static T* GetInstance() {
        static T intance;
        return &intance;
    }
};

class TestCpp11Singleton {
    friend class Cpp11Singleton<TestCpp11Singleton>;

private:
    TestCpp11Singleton() {
        qDebug() << "constructor function created and this:" << this;
    }

};

#endif // CPP11_SIGLETON_H
