#include <QCoreApplication>
#include<QDebug>

int addTen(int age=0)
{
    return age+10;
}
void dogYears(int value)
{
    int age=value*7;
    qDebug()<<"Age in dogYears is "<<age;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int age=25;
    qDebug()<<"Age After 10 years is "<<addTen();
    dogYears(age);
    return a.exec();
}
