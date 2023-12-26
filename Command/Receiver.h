#ifndef RECEIVER_H_
#define RECEIVER_H_

#include <iostream>
#include <QDebug>

// 接受者: 电视
class Television{
public:
    void open() {
        qDebug("打开电视机!");
    }

    void close() {
        qDebug("关闭电视机!");
    }

    void changeChannel(){
        qDebug("切换电视频道!");
    }
};

#endif  // RECEIVER_H_
