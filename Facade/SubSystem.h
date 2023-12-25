#ifndef SUB_SYSTEM_H_
#define SUB_SYSTEM_H_

#include<iostream>
#include<QDebug>

// 内存
class Memory {
public:
    Memory() {}
    void selfCheck() {
        qDebug() << QString::fromStdString("内存自检中...");
        qDebug() << QString::fromStdString("内存自检完成!");
    }
};

// 处理器
class Processor {
public:
    Processor() {}
    void run() {
        qDebug() << QString::fromStdString("启动CPU中...");
        qDebug() << QString::fromStdString("启动CPU成功!" );
    }
};

// 硬盘
class HardDisk {
public:
    HardDisk() {}
    void read() {
        qDebug() << QString::fromStdString("读取硬盘中...");
        qDebug() << QString::fromStdString("读取硬盘成功!");
    }
};

// 操作系统
class OS {
public:
    OS() {}
    void load() {
        qDebug() << QString::fromStdString("载入操作系统中...");
        qDebug() << QString::fromStdString("载入操作系统成功!");
    }
};

#endif  // SUB_SYSTEM_H_
