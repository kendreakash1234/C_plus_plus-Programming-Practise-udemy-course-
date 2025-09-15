#include <QCoreApplication>
#include "animal.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Animal dog;
    Animal cat;
    Animal fish;
    return a.exec();
}
