#include <QCoreApplication>
#include <QtConcurrent/qtconcurrentrun.h>
#include <QThread>
#include <QList>
#include <QFuture>
#include <QDebug>


int do_map(QString name,int value)
{
    qDebug()<<"Do stuff..."<<value;
    value=value*10;
    return value;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QList<int> value;
    for(int i=0;i<9;i++)
    {
        value<<i;
    }

    qDebug()<<"Starting...";
    QString name="Aksah";
    QList<int> updated=QtConcurrent::run(do_map,name,value);
    qDebug()<<"Finished";
    updated.waitForFinished();
     qDebug()<<updated;
    return a.exec();
}
