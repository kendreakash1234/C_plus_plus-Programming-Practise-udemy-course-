#include "laptop.h"

Laptop::Laptop(QObject *parent,QString name) :
    QObject(parent)
{
    this->name=name;
    qDebug()<<this<<" Constructor "<<name;
}

Laptop::~Laptop()
{
    qDebug()<<this<<" destructior "<<name;
}

double Laptop::asKilo()
{

    return weight*0.453592;
}

void Laptop::test()
{
    qDebug()<<this<<" Test "<<name<<" Kilo : "<<asKilo();

}
