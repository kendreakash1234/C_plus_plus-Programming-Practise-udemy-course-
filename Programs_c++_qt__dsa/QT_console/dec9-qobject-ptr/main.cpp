#include <QCoreApplication>
#include "cat.h"
#include<QDebug>
void do_fail(Cat *cat1)
{
    cat1->meow();
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int num=100;
    qDebug()<<num;
    if(true)
    {
        num=101;
        qDebug()<<num;
    }
    qDebug()<<num;

    Cat kitty;
    do_fail(&kitty);
    return a.exec();
}
