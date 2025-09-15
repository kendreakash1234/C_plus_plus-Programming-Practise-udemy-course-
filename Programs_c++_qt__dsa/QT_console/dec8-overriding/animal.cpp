#include "animal.h"
#include<QDebug>
Animal::Animal(QObject *parent) :
    QObject(parent)
{
    qDebug()<<"Animla constructed";
}
void Animal::speak()
{
    qDebug()<<"Animal speaks";
}
