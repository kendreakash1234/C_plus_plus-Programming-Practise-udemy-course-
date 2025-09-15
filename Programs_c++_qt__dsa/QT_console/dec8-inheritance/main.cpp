#include <QCoreApplication>
#include "dog.h"
#include "cat.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    cat cat1;
    if(cat1.isAlive())
       {
           qDebug()<<"cat is alive";
       }
    Dog dog;
    dog.bark();
    if(dog.isAlive())
       {
           qDebug()<<"dog is alive";
       }
    cat1.bark();

    return a.exec();
}
