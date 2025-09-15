#include "client.h"

client::client(QObject *parent) :
    QObject(parent)
{
}

void client::setSocket()
{
    client1=new QTcpSocket(this);
    client1->connectToHost("172.20.209.62",90011);
//    qDebug()<<"new socket created";
    connect(client1,SIGNAL(connected()),this,SLOT(connectedToServer()));
    connect(client1,SIGNAL(disconnected()),this,SLOT(disconnectedFromServer()));
    connect(client1,SIGNAL(readyRead()),this,SLOT(readyToRead()));
}

void client::connectedToServer()
{
    qDebug()<<"Connected";
    client1->write("request received from server to client1");
}

void client::disconnectedFromServer()
{
    qDebug()<<"DisConnected";

}

void client::readyToRead()
{
    qDebug()<<"Received data from server";
    qDebug()<<client1->readAll();
}
