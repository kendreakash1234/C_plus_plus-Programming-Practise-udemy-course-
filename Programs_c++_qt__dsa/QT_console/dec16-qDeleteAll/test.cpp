#include "test.h"

Test::Test(QObject *parent) :
    QObject(parent)
{
    qDebug()<<this<<"Constructed";
}

Test::~Test()
{
    qDebug()<<this<<"Destructed";

}
