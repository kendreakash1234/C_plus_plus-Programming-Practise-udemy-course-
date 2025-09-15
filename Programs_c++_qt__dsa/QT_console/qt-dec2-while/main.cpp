#include <QCoreApplication>
#include<QDebug>
#include<iostream>
using namespace std;
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int num;
    qDebug()<<"Enter number ";
    cin>>num;
    while(num>0)
    {
        qDebug()<<num;
        num--;
    }
    return a.exec();
}
