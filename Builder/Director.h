#ifndef  DIRECTOR_H_
#define  DIRECTOR_H_

#include "Builder.h"

#include <memory>
using namespace std;

class Director {
public:
    Director() : builder_(nullptr) {}

    void set_builder(shared_ptr<CarBuilder> cb) {
        builder_ = cb;
    }

    // 组装汽车
    Car ConstructCar() {
        builder_->buildTire();
        builder_->buildSteeringWheel();
        builder_->buildEngine();
        return builder_->getCar();
    }

private:
    shared_ptr<CarBuilder> builder_;
};

#endif  // DIRECTOR_H_
