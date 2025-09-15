#include "loin.h"
#include "animal.h"
Loin::Loin(QObject *parent) :
    Animal(parent)
{
    qDebug()<<"Loin Constructed";
}
void Loin::speak()
{
    qDebug()<<"Loin speaks";
    Animal::speak();
}
