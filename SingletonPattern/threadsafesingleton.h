#ifndef THREADSAFESINGLETON_H
#define THREADSAFESINGLETON_H


class ThreadSafeSingleton
{
public:
    static ThreadSafeSingleton* GetInstance();
    static void DestroyInstance();
private:

    ThreadSafeSingleton();
    class SingletonDel {
    public:
        ~SingletonDel() {
            if (m_instance != nullptr) {
                delete m_instance;
                m_instance = nullptr;
            }
        }
    };

    static ThreadSafeSingleton m_singleton_del;
    static ThreadSafeSingleton* m_instance;
};

#endif // THREADSAFESINGLETON_H
