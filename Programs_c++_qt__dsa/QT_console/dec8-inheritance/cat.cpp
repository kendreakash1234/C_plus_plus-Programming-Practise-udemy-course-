#include "cat.h"

cat::cat(QObject *parent) :
    Animal(parent)
{
    qDebug()<<this<<" Constructed";
}

bool cat::isAlive()
{
    return true;
}

bool cat::hasBackbone()
{
    return true;
}

void cat::bark()
{
    qDebug()<<"cat meowing";
}

