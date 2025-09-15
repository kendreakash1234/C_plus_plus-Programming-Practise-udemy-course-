#include "test.h"

test::test(QObject *parent) :
    QObject(parent)
{
    number=0;
    Qtimer.setInterval(1000);
    connect(&Qtimer,&QTimer::timeout,this,&test::timeout);
}

void test::timeout()
{
    number++;
     qDebug()<<QTime::currentTime().toString(Qt::DateFormat::TextDate);
    if(number>5)
    {
        Qtimer.stop();
        qDebug()<<"Complete";
    }

}

void test::doStuff()
{
    number=0;
    Qtimer.start();

}
