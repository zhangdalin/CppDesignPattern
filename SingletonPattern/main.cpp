#include <iostream>

#include "cpp11_sigleton.h"
#include <thread>

using namespace std;

int main(int argc, char* argv[])
{
    cout << "Hello World!" << endl;
    thread t1(Cpp11Singleton<TestCpp11Singleton>::GetInstance);
    t1.detach();
    thread t2(Cpp11Singleton<TestCpp11Singleton>::GetInstance);
    t2.detach();
    thread t3(Cpp11Singleton<TestCpp11Singleton>::GetInstance);
    t3.detach();
    thread t4(Cpp11Singleton<TestCpp11Singleton>::GetInstance);
    t4.detach();

    Cpp11Singleton<TestCpp11Singleton>::GetInstance();
    Cpp11Singleton<TestCpp11Singleton>::GetInstance();
    Cpp11Singleton<TestCpp11Singleton>::GetInstance();
    Cpp11Singleton<TestCpp11Singleton>::GetInstance();
}
