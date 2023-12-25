#include "Director.h"
#include "ConcreteBuilder.h"

int main() {
    // 抽象建造者(一般是动态确定的)
    shared_ptr<CarBuilder> builder = nullptr;
    // 指挥者
    unique_ptr<Director> director(new Director());
    // 产品
    Car car;

    // 建造奔驰
    std::cout << "==========construct benz car==========" << std::endl;
    builder = make_shared<BenzBuilder>();
    director->set_builder(builder);
    car = director->ConstructCar();
    std::cout << "Car with:" << car.to_string() << endl;

    std::cout << "==========done==========" << std::endl;

    // 建造奥迪
    std::cout << "==========construct audi car==========" << std::endl;
    builder = make_shared<AudiBuilder>();
    director->set_builder(builder);
    car = director->ConstructCar();
    std::cout << "Car with:" << car.to_string() << endl;

    std::cout << "==========done==========" << std::endl;
}
