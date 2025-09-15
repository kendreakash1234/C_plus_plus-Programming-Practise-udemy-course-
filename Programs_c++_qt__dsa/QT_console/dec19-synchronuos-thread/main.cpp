#include <QCoreApplication>
#include <QThread>
#include <QDebug>

void test()
{
    qDebug()<<"Testing "<<QThread::currentThread();
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QThread::currentThread()->setObjectName("Main Thread");
    qDebug()<<"Starting "<<QThread::currentThread();
    test();
    qDebug()<<"Finishing "<<QThread::currentThread();
    return a.exec();
}
