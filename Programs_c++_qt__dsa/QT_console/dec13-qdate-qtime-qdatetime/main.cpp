#include <QCoreApplication>
#include <QDebug>
#include <QDate>
#include <QTime>
#include <QDateTime>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QDate date=QDate::currentDate();
    QTime time=QTime::currentTime();
    QDateTime dateTime=QDateTime::currentDateTime();

    qDebug()<<"Current tim is "<<time;
    qDebug()<<"Today's date is "<<date;
    qDebug()<<"Today's date +1 "<<date.addDays(1);
    qDebug()<<"Today's date +2 "<<date.addDays(2);

    qDebug()<<"Current time and date is "<<dateTime;
    return a.exec();
}
