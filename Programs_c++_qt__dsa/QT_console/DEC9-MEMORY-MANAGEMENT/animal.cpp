#include "animal.h"
#include<QDebug>

Animal::Animal(QObject *parent) :
    QObject(parent)
{
    qDebug()<<this<<" constructed";
}

Animal::~Animal()
{
    qDebug()<<this<<"Destructed";
}
