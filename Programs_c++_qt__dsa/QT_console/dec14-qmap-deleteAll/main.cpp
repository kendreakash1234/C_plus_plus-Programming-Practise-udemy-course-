#include <QCoreApplication>
#include <QDebug>
#include<QMap>
#include "test.h"

void testMapDelete()
{
    QMap<QString,Test*> map;

    for(int i=0;i<5;i++)
    {
        QString id="ID-"+QString::number(i);
        QString name="Item-"+QString::number(i);
        map.insert(id,new Test(nullptr,name));
    }
    foreach(QString key,map.keys())
    {
        qDebug()<<key<<" "<<map[key];
    }
    qDeleteAll(map);
//    map.clear();  //dangling pointer
    qDebug()<<map.count();
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    testMapDelete();
    return a.exec();
}
