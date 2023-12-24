#include "singleton.h"

Singleton* Singleton::m_instance = nullptr;

Singleton* Singleton::GetInstance() {
    if (m_instance == nullptr) {
        m_instance = new Singleton();
    }

    return m_instance;
}

void Singleton::DestroyInstance()
{
    if (m_instance != nullptr) {
        delete m_instance;
        m_instance = nullptr;
    }
}

Singleton::Singleton()
{

}
