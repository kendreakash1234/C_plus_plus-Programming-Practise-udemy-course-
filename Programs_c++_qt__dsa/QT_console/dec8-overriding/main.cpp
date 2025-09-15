#include <QCoreApplication>
#include<QDebug>

#include "animal.h"
#include "loin.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

//    Animal animal;
//    animal.speak();
    Loin loin;
    loin.speak();
    return a.exec();
}
