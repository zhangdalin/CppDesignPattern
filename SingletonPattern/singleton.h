#ifndef SINGLETON_H
#define SINGLETON_H


class Singleton
{
public:
    static Singleton* GetInstance();
    static void DestroyInstance();

private:
    Singleton();

    class SingletonDel{
    public:
        ~SingletonDel() {
            if (m_instance != nullptr) {
                delete m_instance;
                m_instance = nullptr;
            }
        }
    };
    static SingletonDel m_singleton_del;
    static Singleton* m_instance;
};

#endif // SINGLETON_H
