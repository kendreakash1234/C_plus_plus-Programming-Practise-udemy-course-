#include <QCoreApplication>
#include <QDebug>
#include <QtTest/qtest.h>
#include "cat.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Cat cat;
#ifdef QT_DEBUG
    QTest::qExec(&cat);
#endif
    return a.exec();
}
