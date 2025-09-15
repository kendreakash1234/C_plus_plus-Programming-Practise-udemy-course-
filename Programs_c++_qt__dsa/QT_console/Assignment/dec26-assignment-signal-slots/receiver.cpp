#include "receiver.h"

Receiver::Receiver(QObject *parent) :
    QObject(parent)
{
}


void Receiver::Received(QString name)
{
    qDebug()<<"Messahe received from "<<sender()<<"with name"<<name;
}
