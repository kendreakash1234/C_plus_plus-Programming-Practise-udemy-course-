#include "test.h"

Test::Test(QObject *parent,QString name) :
    QObject(parent)
{
    qDebug()<<"Constructed "<<this;
}
Test::~Test()
{
    qDebug()<<"Destructed "<<this;
}
