#include <QCoreApplication>
#include <QDebug>
#include <iostream>
using namespace std;

void check(int age)
{
    try
    {
        if(age<21)
            throw QString("You are not an adult");
        if(age>50)
            throw QString("You are not an adult");
        if(age<=0)
            throw QString("Not a valid age");
    }catch(QString e)
    {
        qCritical()<<e;
        return;
    }
    catch(...)
    {
        qCritical()<<"Unkown error";
        return;
    }

    qDebug()<<"You are "<<age<<" years old";
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int age;
        qDebug()<<"Enter age";
        cin>>age;
        check(age);
    return a.exec();
}
