#include <QCoreApplication>
#include<QDebug>
#include<iostream>
using namespace std;

void swap(int x,int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int b,c;
    qDebug()<<"Enter values of a and b";
    cin>>b>>c;
    qDebug()<<"Before swap b = "<<b<<" c = "<<c;
    swap(b,c);
    qDebug()<<"After  swap b = "<<b<<" c = "<<c;
    return a.exec();
}
