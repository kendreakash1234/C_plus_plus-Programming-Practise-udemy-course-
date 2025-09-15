#include <QCoreApplication>
#include <QUdpSocket>
#include <QDebug>
#include "worker.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Worker worker;

    worker.start();
    return a.exec();
}
