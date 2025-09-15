#include <QCoreApplication>
#include <QThread>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QThread *thread=QThread::currentThread();
    thread->setObjectName("Main Thread");
    qDebug()<<"Starting "<<thread;

    for(int i=1;i<=10;i++)
    {
//        qDebug()<<QThread::currentThread();
        qDebug()<<i<<" on "<<thread;
    }
    qDebug()<<"Finished "<<thread;
    return a.exec();
}
