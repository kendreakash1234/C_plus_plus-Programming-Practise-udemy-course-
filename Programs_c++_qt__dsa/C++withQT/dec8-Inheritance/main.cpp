#include <QCoreApplication>
#include "mammal.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    mammal b;
    qDebug()<<b.hasBackbone();
    return a.exec();
}
