#include <QCoreApplication>
#include <QObject>
#include <QThread>
#include <QThreadPool>
#include <QRunnable>
#include <QDebug>
//#include <QRandomGenerator>


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QThread::currentThread()->setObjectName("Main thread");

    QThreadPool *pool=QThreadPool::globalInstance();
    qDebug()<< pool->maxThreadCount()<<" Threads";


    return a.exec();
}
