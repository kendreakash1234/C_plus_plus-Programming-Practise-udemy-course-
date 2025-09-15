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
   do
    {
        qDebug()<<num;
        num--;
    } while(num>0);
    return a.exec();
}
