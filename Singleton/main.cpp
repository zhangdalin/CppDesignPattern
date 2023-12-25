#include <iostream>
#include "Singleton.h"
#include "Singleton2.h"
#include "Singleton3.h"

int main() {
    SG1::Singleton* s1 = SG1::Singleton::GetInstance();
    SG1::Singleton* s2 = SG1::Singleton::GetInstance();

    std::cout << "s1 Address: " << s1 << std::endl;
    std::cout << "s2 Address: " << s2 << std::endl;

    SG2::Singleton& s3 = SG2::Singleton::GetInstance();
    SG2::Singleton& s4 = SG2::Singleton::GetInstance();

    std::cout << "s3 Address: " << &s3 << std::endl;
    std::cout << "s4 Address: " << &s4 << std::endl;

    NewSingleton* s5 = SG3::Singleton<NewSingleton>::GetInstance();
    NewSingleton* s6 = SG3::Singleton<NewSingleton>::GetInstance();

    std::cout << "s5 Address: " << s5 << std::endl;
    std::cout << "s6 Address: " << s6 << std::endl;

    return 0;
}
