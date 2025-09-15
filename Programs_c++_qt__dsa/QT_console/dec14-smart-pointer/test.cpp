
#include "test.h"

Test::Test(QObject *parent,QString name) :
    QObject(parent)
{
    qDebug()<<this<<"Constructed";
}

Test::~Test()
{
    qDebug()<<this<<"Deconstructed";
}
