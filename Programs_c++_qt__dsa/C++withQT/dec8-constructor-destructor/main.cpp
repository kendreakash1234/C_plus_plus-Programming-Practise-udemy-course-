#include <QCoreApplication>
#include "laptop.h"

void test(Laptop &machine)
{
    machine.test();
}
void makeLaptops()
{
    Laptop mine(nullptr,"my laptop");
    Laptop your(nullptr,"your laptop");

    mine.weight=4.5;
    your.weight=6.3;

    test(mine);
    test(your);
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    makeLaptops();


    return a.exec();
}
