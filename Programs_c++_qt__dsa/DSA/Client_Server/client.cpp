#include "client.h"

Client::Client(QObject *parent) :
    QObject(parent)
{
    tcpClient=new QTcpSocket(this);
    tcpClient->connectToHost("172.20.209.62",90011);
    connect(tcpClient,SIGNAL(connected()),this,SLOT(connectedToServer()));
    connect(tcpClient,SIGNAL(disconnected()),this,SLOT(disconnectedFromServer()));
    connect(tcpClient,SIGNAL(readyRead()),this,SLOT(readyToRead()));
    connect(tcpClient,SIGNAL(error(QAbstractSocket::SocketError)),this,SLOT(readyToRead()));
}

Client::~Client()
{
    tcpClient->close();
    delete tcpClient;
}
void Client::connectedToServer()
{
    qDebug()<<"Connected";
    tcpClient->write("request received from server to client1");
}

void Client::disconnectedFromServer()
{
    qDebug()<<"DisConnected";
}

void Client::readyToRead()
{
    qDebug()<<"Received data from server";
    qDebug()<<tcpClient->readAll();
}

void Client::Serror(QAbstractSocket::SocketError)
{
    qDebug()<<tcpClient->error();
}
