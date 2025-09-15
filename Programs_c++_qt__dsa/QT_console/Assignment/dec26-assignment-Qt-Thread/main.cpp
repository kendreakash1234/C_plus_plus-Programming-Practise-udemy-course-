#include <QCoreApplication>
#include <QThread>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
//    qDebug()<<"Current thread is "<<QThread::currentThread();
    QThread *thread=QThread::currentThread();
    thread->setObjectName("Main");
    qDebug()<<"Starting "<<thread;
    for(int i=0;i<10;i++)
    {
        qDebug()<<"Thread "<<i<<" "<<thread;
    }
    qDebug()<<"Finished"<<thread;

    return a.exec();
}
