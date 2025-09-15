#include <QCoreApplication>
#include<iostream>
#include<QDebug>
#include "calc.h"
using namespace std;
Calc* getCalc()
{
    Calc* c=new Calc();
    return c;
}

int dogYears(int age,Calc* c)
{
    return c->dogYears(age);
}

int catYears(int age,Calc* c)
{
    return c->catYears(age);
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Calc* c=getCalc();
    int age;
    cin>>age;
    qDebug()<<"Dog Years "<<dogYears(age,c);
    qDebug()<<"Cat Years "<<catYears(age,c);
    return a.exec();
}
