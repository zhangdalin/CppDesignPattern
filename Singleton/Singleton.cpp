#include "Singleton.h"

// 静态变量instance初始化不要放在头文件中, 如果多个文件包含singleton.h会出现重复定义问题
SG1::Singleton* SG1::Singleton::instance_ = nullptr;
std::mutex SG1::Singleton::m_mutex_;
