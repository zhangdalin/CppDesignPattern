#ifndef SINGLETON2_H
#define SINGLETON2_H

namespace SG2 {

class Singleton {
public:
    static Singleton& GetInstance() {
        static Singleton instance;
        return instance;
    }
    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;

private:
    Singleton() {}
};

}

#endif // SINGLETON2_H
