#include "cat.h"

Cat::Cat(QObject *parent) :
    QObject(parent)
{
    qDebug()<<Q_FUNC_INFO;
}

void Cat::public_test()
{
    qDebug()<<Q_FUNC_INFO;

}

void Cat::test()
{
    qDebug()<<Q_FUNC_INFO;

}

void Cat::play()
{
    qDebug()<<Q_FUNC_INFO;

}

void Cat::meow()
{
    qDebug()<<Q_FUNC_INFO;

}

void Cat::sleep()
{
    qDebug()<<Q_FUNC_INFO;

}

void Cat::speak(QString value)
{
    qDebug()<<Q_FUNC_INFO;

}

void Cat::private_test()
{
    qDebug()<<Q_FUNC_INFO;

}
