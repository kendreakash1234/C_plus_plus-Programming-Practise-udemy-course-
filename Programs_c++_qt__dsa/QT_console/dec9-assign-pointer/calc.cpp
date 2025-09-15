#include "calc.h"
#include<QDebug>
Calc::Calc(QObject *parent) :
    QObject(parent)
{   qDebug()<<"Constructed created";
}

int Calc::dogYears(int age)
{
    return age*7;
}

int Calc::catYears(int age)
{
    return age*9;
}
