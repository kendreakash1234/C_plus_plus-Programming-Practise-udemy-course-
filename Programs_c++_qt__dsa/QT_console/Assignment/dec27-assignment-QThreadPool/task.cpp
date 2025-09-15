#include "task.h"

Task::Task(QObject *parent) :
    QObject(parent)
{
    qDebug()<<"Constructed "<<this<<" on "<<QThread::currentThread();
}

Task::~Task()
{
    qDebug()<<"Destructed "<<this<<" on "<<QThread::currentThread();
}

void Task::run()
{
    QThread *q=QThread::currentThread();
    qDebug()<<"Starting "<<q;
    for(int i=0;i<10;i++)
    {
        qDebug()<<i<<" on "<<q;
    }
    qDebug()<<"Finishing "<<q;
}
