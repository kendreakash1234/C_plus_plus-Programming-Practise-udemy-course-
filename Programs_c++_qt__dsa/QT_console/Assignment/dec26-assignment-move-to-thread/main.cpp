#include <QCoreApplication>
#include <QDebug>
#include <QThread>
#include <QScopedPointer>
#include "task.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QThread::currentThread()->setObjectName("Main");


    QThread worker;
    worker.setObjectName("Worker");

    qDebug()<<"Starting work"<<QThread::currentThread();

    QScopedPointer<Task> t(new Task());
    Task *task=t.data();

    task->moveToThread(&worker);

    worker.connect(&worker,&QThread::started,task,&Task::work);
    worker.start();
    qDebug()<<"Free to do other things"<<QThread::currentThread();
    return a.exec();
}
