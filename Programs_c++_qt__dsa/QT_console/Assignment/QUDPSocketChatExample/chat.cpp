#include "chat.h"

Chat::Chat(QObject *parent) :
    QObject(parent)
{
    port=2020;
    if(!socket.bind(port,QUdpSocket::ShareAddress))
    {
        qDebug()<<socket.errorString();
    }
        else
    {
        qDebug()<<"Started on "<<socket.localAddress()<<":"<<socket.localPort();
        connect(&socket,&QUdpSocket::readyRead,this,&Chat::readyRead);
    }
}

void Chat::command(QString value)
{
    QString message=name+": ";
    if(name.isEmpty())
    {
        name=value;
        message=name+": joined";
        send(message);
        return;
    }
    message.append(value);
    send(message);
}

void Chat::send(QString value)
{
    QByteArray data=value.toLatin1();
    socket.writeDatagram(data,QHostAddress::Broadcast,port);
}

void Chat::readyRead()
{
    char data[50];
    while(socket.hasPendingDatagrams())
    {
        socket.readDatagram(data,50);
    }

}
