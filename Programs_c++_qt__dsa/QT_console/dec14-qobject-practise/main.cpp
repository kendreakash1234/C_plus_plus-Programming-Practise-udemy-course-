#include <QCoreApplication>
#include <QDebug>
#include "testclass.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    qDebug()<<"Main function";

    TestClass *t=new TestClass();
    delete t;
    TestClass t2;
    return a.exec();
}
