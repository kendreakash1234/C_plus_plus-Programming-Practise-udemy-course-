#include <QCoreApplication>
#include<QDebug>
#include<iostream>
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int day;
    qDebug()<<"Enter number";
    cin>>day;
    switch(day)
    {
    case 1:
        qDebug()<<"It's Monday";
        break;
    case 2:
        qDebug()<<"It's tuesday";
        break;
    case 3:
        qDebug()<<"It's wednsday";
        break;
    case 4:
        qDebug()<<"It's thursday";
        break;
    case 5:
        qDebug()<<"It's friday";
        break;
    case 6:
        qDebug()<<"It's saturday";
        break;
    case 7:
        qDebug()<<"It's sunday";
        break;
    default:
        qDebug()<<"Enter number lower than 8";
    }


    return a.exec();
}
