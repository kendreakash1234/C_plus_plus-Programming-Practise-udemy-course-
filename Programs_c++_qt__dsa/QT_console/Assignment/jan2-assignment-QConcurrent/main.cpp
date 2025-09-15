#include <QCoreApplication>
#include <QtConcurrent/QtConcurrent>
#include <QThread>
#include <QDebug>
#include <QFuture>

int test()
{
    QThread *thread=QThread::currentThread();
    int value=0;
    for(int i=0;i<10;i++)
    {
        qDebug()<<"Starting "<<thread;
        value=value+i;
    }

    qDebug()<<"Finished "<<thread;
    return value;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QFuture<int> future1=QtConcurrent::run(&test);
    QFuture<int> future2=QtConcurrent::run(&test);
    QFuture<int> future3=QtConcurrent::run(&test);
    qDebug()<<"Future1 "<<future1.result();
    qDebug()<<"Future2 "<<future2.result();
    qDebug()<<"Future3 "<<future3.result();
    return a.exec();
}
