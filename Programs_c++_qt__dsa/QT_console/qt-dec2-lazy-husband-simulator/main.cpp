#include <QCoreApplication>
#include<QDebug>
#include<iostream>
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int max;
    qDebug()<<"Enter number";
    cin>>max;
    QString task="Please take out the trash";
    for(int i=1;i<20;i++)
    {
        qDebug()<<task;
        qDebug()<<"I have asked "<<i<<" times";
        if(i>=max)
        {
            qDebug()<<"Husband : Ok Ok I will do it";
            break;
        }
    }

    return a.exec();
}
