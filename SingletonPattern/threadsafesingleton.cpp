#include "threadsafesingleton.h"
#include <QMutex>
#include <QMutexLocker>

namespace ThreadSafeSingletonPrivate {
    static QMutex mutex;
}

ThreadSafeSingleton* ThreadSafeSingleton::m_instance = nullptr;


ThreadSafeSingleton *ThreadSafeSingleton::GetInstance()
{
    if (m_instance == nullptr) {
        QMutexLocker lock(&ThreadSafeSingletonPrivate::mutex);
        m_instance = new ThreadSafeSingleton();
    }

    return m_instance;

}

void ThreadSafeSingleton::DestroyInstance()
{
    if(m_instance != nullptr) {
        delete m_instance;
        m_instance = nullptr;
    }
}

ThreadSafeSingleton::ThreadSafeSingleton()
{

}
