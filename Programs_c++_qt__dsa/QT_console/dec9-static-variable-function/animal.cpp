#include "animal.h"

Animal::Animal(QObject *parent) :
    QObject(parent)
{
    qDebug()<<"Animal Constructed";
    count++;
}

void Animal::display()
{
    qDebug()<<"After creating object we can access this";
}

void Animal::print()
{
    qDebug()<<"Without creating object we can access this";
}
