#include "dog.h"

Dog::Dog(QObject *parent) :Animal(parent)
{
    qDebug()<<this<<" Constructed";
}
bool Dog::hasBackbone()
{
    return true;
}
void Dog::bark()
{
    qDebug()<<"dog barking";
}
