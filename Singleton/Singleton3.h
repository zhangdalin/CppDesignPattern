#ifndef SINGLETON3_H
#define SINGLETON3_H

namespace SG3 {

template <typename T>
class Singleton {
public:
    static T* GetInstance() {
        static T instance;
        return &instance;
    }
};

}

class NewSingleton {
    friend class SG3::Singleton<NewSingleton>;
};

#endif // SINGLETON3_H
