#include <QCoreApplication>
#include<QDebug>
#include "source.h"
#include "destination.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Source s;
    Destination d;

    QObject::connect(&s,&Source::mySignal,&d,&Destination::mySlot);

    s.test();
//    d.mySlot("Hi");
    qDebug()<<"ended";
    return a.exec();
}
