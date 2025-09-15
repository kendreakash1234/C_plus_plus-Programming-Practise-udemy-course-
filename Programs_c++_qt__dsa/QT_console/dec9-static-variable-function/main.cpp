#include <QCoreApplication>
#include<QDebug>
#include "animal.h"
int Animal::count=0;
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Animal::print();
    Animal dog;
    dog.display();
    dog.print();
    Animal horse;
    Animal cat;
    qDebug()<<dog.count;
    qDebug()<<horse.count;
    qDebug()<<cat.count;
    qDebug()<<Animal::count;

    return a.exec();
}
