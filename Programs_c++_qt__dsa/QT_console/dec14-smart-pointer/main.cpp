#include <QCoreApplication>
#include <QSharedPointer>
#include "test.h"

Test* getObject()
{
    return new Test(nullptr,"Test");
}

void test()
{
QSharedPointer<Test> ptr(getObject());
qDebug()<<ptr.data();
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    test();
    return a.exec();
}
