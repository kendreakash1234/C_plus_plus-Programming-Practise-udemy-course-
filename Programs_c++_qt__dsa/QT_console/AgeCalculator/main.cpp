#include <QCoreApplication>
#include <QDebug>
#include "agecalc.h"
void print(AgeCalc &calc)
{
    qDebug()<<calc.name()<<" Human Years "<<calc.humanYears();
    qDebug()<<calc.name()<<" Human Years "<<calc.dogYears();
    qDebug()<<calc.name()<<" Human Years "<<calc.catYears();
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    AgeCalc akash;
    akash.setName("Akash");
    akash.setAge(25);
    AgeCalc karan;
    karan.setName("Karan");
    karan.setAge(26);
    print(akash);
    return a.exec();
}
