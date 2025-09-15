#include <QCoreApplication>
#include <QDebug>
#include <QThread>
#include <QThreadPool>
#include <QScopedPointer>
#include "task.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QThread::currentThread()->setObjectName("Main");
    qDebug()<<"Starting work"<<QThread::currentThread();
    qDebug()<<"Max Threads "<<QThreadPool::globalInstance()->maxThreadCount();

    for(int i=0;i<10;i++)
    {
        Task *task = new Task();
        task->setAutoDelete(true);
        QThreadPool::globalInstance()->start(task);
    }
    qDebug()<<"Free to do other things"<<QThread::currentThread();
    return a.exec();
}
