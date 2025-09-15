#include <QCoreApplication>
#include "test.h"
#include <QDebug>

void notification()
{
    Test mom;
    Test child;

    mom.setObjectName("Mom");
    child.setObjectName("Child");

    QObject::connect(&mom,&Test::alarm,&child,&Test::wake);
    mom.Testing();
    child.Testing();
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    notification();
    return a.exec();
}
