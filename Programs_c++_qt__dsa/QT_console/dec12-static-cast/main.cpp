#include <QCoreApplication>
#include<QDebug>
#include "racecar.h"
#include "car.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Car* c=new Car(&a);

    RaceCar* rc=static_cast<RaceCar*>(c);
    rc->display();
    return a.exec();
}
