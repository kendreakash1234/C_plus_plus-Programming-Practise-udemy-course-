#include <QCoreApplication>
#include <QDebug>
#include "car.h"
#include "racecar.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    RaceCar* rc=new RaceCar(&a);

    Car* c=dynamic_cast<Car*>(rc);
    c->display();
    return a.exec();
}
