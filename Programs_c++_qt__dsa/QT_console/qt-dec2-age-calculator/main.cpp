#include <QCoreApplication>
#include<QDebug>
#include<iostream>
using namespace std;
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int age;
    qDebug()<<"Enter birthyear";
    cin>>age;
    if(age<0)
    {
        qDebug()<<"you have entered wrong age";
    }
    else if(age<18){
        qDebug()<<"You are not an adult";
    }
    else if(age>=18 && age<40)
    {
        qDebug()<<"You are an adult";
    }
    else
    {
        qDebug()<<"you are older than 40";
    }

    return a.exec();
}
