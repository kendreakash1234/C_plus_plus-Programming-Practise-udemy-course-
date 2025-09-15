#include "car.h"
#include <QDebug>
Car::Car(QObject *parent) :
    QObject(parent)
{
    qDebug()<<"Car Constructed";
}

void Car::display()
{
    qDebug()<<"display of car ";
}
