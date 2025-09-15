#include "testclass.h"

TestClass::TestClass(QObject *parent) : QObject(parent)
{
    qDebug()<<this<<"Constructed";
}

TestClass::~TestClass()
{
    qDebug()<<this<<"Destructed";
}
