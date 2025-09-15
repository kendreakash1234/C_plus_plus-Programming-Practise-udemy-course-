
#include "test.h"

Test::Test(QObject *parent) :
    QObject(parent)
{
    qDebug()<<"Constructed";
}

void Test::Testing()
{
    QString noise="Wake up";
    emit alarm(noise);
}

void Test::wake(QString noise)
{
    qDebug()<<"From "<<sender()<<noise;
}
