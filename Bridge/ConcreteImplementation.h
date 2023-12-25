#ifndef CONCRETE_IMPLEMENTATION_H_
#define CONCRETE_IMPLEMENTATION_H_

#include <string>
#include "Implementation.h"

#include <QDebug>

// 具体实现类: Red
class Red : public Color {
public:
    void bepaint(std::string pen_type, std::string name) override {
        //std::cout << pen_type << "红色的" << name << "." << std::endl;
        qDebug() << QString::fromStdString(pen_type)
                 << QString::fromStdString("红色的")
                 << QString::fromStdString(name) << ".";
    }
};

// 具体实现类: Green
class Green : public Color {
public:
    void bepaint(std::string pen_type, std::string name) override {
        //std::cout << pen_type << "绿色的" << name << "." << std::endl;
        qDebug() << QString::fromStdString(pen_type)
                 << QString::fromStdString("绿色的")
                 << QString::fromStdString(name) << ".";
    }
};


#endif  // CONCRETE_IMPLEMENTATION_H_
