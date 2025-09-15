#include "test.h"
#include<QDebug>
Test::Test(QObject *parent) :
    QObject(parent)
{
    qDebug()<<this<<"Costructed";
}

Test::~Test()
{
    qDebug()<<this<<"destructed";
}
