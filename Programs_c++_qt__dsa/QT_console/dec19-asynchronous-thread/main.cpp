#include <QCoreApplication>
#include <QDebug>
#include <QThread>
#include "test.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QThread::currentThread()->setObjectName("Main Thread");
    qDebug()<<"Starting "<<QThread::currentThread();

    QThread worker;
    worker.setObjectName("Worker thread");
    Test test;
    test.moveToThread(&worker);

    QObject::connect(&worker,&QThread::started,&test,&Test::run);
    worker.start();


    qDebug()<<"Finishing "<<QThread::currentThread();

    return a.exec();
}
