#include <QCoreApplication>
#include<QDebug>
#include "appliance.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Appliance machine3000;

    qDebug()<<"Grill"<<machine3000.grill();
    qDebug()<<"Freeze"<<machine3000.freeze();
    qDebug()<<"Toast"<<machine3000.cook();
    return a.exec();
}
