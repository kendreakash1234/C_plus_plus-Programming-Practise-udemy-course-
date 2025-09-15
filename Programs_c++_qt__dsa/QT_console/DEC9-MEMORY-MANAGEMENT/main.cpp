#include <QCoreApplication>
#include "animal.h"
#include "test.h"
#include <QDebug>

void run()
{

}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Test *parent=    new Test(&a);
    parent->dog=new Animal(parent);
    delete parent;

    return a.exec();
}
