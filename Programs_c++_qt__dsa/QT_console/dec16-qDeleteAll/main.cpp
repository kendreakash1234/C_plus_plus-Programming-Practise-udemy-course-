#include <QCoreApplication>
#include <QDebug>
#include <QList>
#include "test.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QList<Test*> list;
    for(int i=0;i<9;i++)
    {
    Test* t=new Test();
    t->setObjectName(QString::number(i));
    list.append(t);
    }

    qDebug()<<list.at(5);
    qDeleteAll(list);
//    qDebug()<<list.at(5);
    qDebug()<<"List count before clear"<<list.count();
    list.clear();
    qDebug()<<"List count after clear"<<list.count();
    return a.exec();
}
