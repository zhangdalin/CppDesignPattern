#ifndef CONCRETE_PROTOTYPE_H_
#define CONCRETE_PROTOTYPE_H_

#include <QDebug>

#include <iostream>
#include <string>
#include "Prototype.h"


// 邮件的附件
class Attachment {
public:
    void set_content(std::string content) {
        content_ = content;
    }
    std::string get_content() {
        return content_;
    }

private:
    std::string content_;
};

// 具体原型: 邮件类
class Email : public Object {
public:
    Email() {}
    Email(std::string text, std::string attachment_content) : text_(text), attachment_(new Attachment()) {
        attachment_->set_content(attachment_content);
    }
    ~Email() {
        if (attachment_ != nullptr) {
            delete attachment_;
            attachment_ = nullptr;
        }
    }

    void display() {
        qDebug() << QString::fromStdString( "------------查看邮件------------" );
        qDebug() << QString::fromStdString( "正文: ") << QString::fromStdString(text_);
        qDebug() << QString::fromStdString( "邮件: ") << QString::fromStdString(attachment_->get_content());
        qDebug() << QString::fromStdString( "------------查看完毕------------" );
    }

    // 深拷贝
    Email* clone() override {
        return new Email(this->text_, this->attachment_->get_content());
    }

    void changeText(std::string new_text) {
        text_ = new_text;
    }

    void changeAttachment(std::string content) {
        attachment_->set_content(content);
    }

private:
    std::string text_;
    Attachment *attachment_ = nullptr;
};

#endif  // CONCRETE_PROTOTYPE_H_
