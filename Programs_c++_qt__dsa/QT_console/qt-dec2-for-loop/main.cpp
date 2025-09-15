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
    for(int i=1;i<=num;i++)
    {
        qDebug()<<i;
    }
    return a.exec();
}
