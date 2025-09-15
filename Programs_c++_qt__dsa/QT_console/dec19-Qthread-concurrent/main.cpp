#include <QCoreApplication>
#include <QDebug>
#include <QThread>
#include <QtConcurrent/QtConcurrent>
#include <QFuture>

void test()
{
    qDebug()<<"Helo world"<<QThread::currentThread();
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QFuture<void> f=QtConcurrent::run(&test);

    return a.exec();
}
