#include <QCoreApplication>
#include<QDebug>
#include<iostream>
using namespace std;

int getSize()
{
       qDebug()<<"Enter measurment in feet";
       int value;
       cin>>value;
       return value;
}

double calc_paint(int width,int height)
{
    double sqft=width*height;
    double paint=sqft/325;
    return paint;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int width;
    int height;
    qDebug()<<"Enter the ceiling in feet";
    height=getSize();
    if(height<=0)
    {
        qDebug()<<"Enter the manual please";
    }
    return a.exec();
}


