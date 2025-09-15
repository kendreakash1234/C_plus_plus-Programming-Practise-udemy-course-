#include <QCoreApplication>
#include<QDebug>
#include<iostream>
using namespace std;

void test()
{
    qDebug()<<"This is test function called from main";
}
int calc(int birthyear,int currentyear)
{
    return (currentyear-birthyear);
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    test();
    int birthyear,currentyear;
    qDebug()<<"Enter your birth year and current year";
    cin>>birthyear>>currentyear;
    qDebug()<<"Your age is "<<calc(birthyear,currentyear);

    return a.exec();
}
