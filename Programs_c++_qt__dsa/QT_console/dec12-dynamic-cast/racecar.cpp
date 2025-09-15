#include "racecar.h"
#include "car.h"
#include <QDebug>
RaceCar::RaceCar(QObject *parent) :
    Car(parent)
{
    qDebug()<<"RaceCar Constructed";
}

void RaceCar::display()
{
    qDebug()<<"display of racecar";
}

