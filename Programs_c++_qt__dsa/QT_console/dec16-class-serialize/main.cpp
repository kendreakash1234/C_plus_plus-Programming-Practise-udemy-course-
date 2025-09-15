#include <QCoreApplication>
#include <QFile>
#include <QDataStream>
#include <QDebug>
#include <QMap>

#include "test.h"

bool write(Test *t,QString filename)
{
    QFile file(filename);
    if(!file.open(QIODevice::WriteOnly))
        return false;
    QDataStream out(&file);
    out.setVersion(QDataStream::Qt_5_2);
    out<<*t;
    file.close();
    return true;
}
bool read(QString filename)
{

    QFile file(filename);
    if(!file.open(QIODevice::ReadOnly))
        return false;

    QDataStream in(&file);
    if(in.version()!=QDataStream::Qt_5_2)
    {
        qCritical()<<"status not match";
        file.close();
        return false;
    }
    Test t;
    in>>t;

    file.close();
    qDebug()<<"name: "<<t.name();
    foreach(QString key,t.map().keys())
    {

        qDebug()<<key<<":"<<t.map().value(key);
    }

    return true;

}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QString filename="test.txt";

    Test t;
    t.fill();
    if(write(&t,filename))
    {
        qDebug()<<"Saved";
        read(filename);
    }

    return a.exec();
}
