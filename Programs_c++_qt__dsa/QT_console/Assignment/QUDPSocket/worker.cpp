#include "worker.h"

Worker::Worker(QObject *parent) :
    QObject(parent)
{
    connect(&timer,&QTimer::timeout,this,&Worker::timeout);
    connect(&socket,&QUdpSocket::readyRead,this,&Worker::readyRead);
    timer.setInterval(2000);
    port=2021;
}

void Worker::start()
{
    if(socket.bind(port))//,QAbstractSocket::ShareAddress
    {
        qDebug()<<"Started UDP on "<<socket.localAddress()<<" : "<<socket.localPort();
        broadcast();
    }
    else
    {
        qDebug()<<socket.errorString();
        return;
    }

}

void Worker::stop()
{
    timer.stop();
    socket.close();
    qDebug()<<"Socket closed";
}

void Worker::timeout()
{
    QString date=QDateTime::currentDateTime().toString();
    QByteArray data=date.toLatin1();
    socket.writeDatagram(data, QHostAddress::Broadcast,  port );
    qDebug()<<"Send : "<<data;
}

void Worker::readyRead()
{
    if(socket.hasPendingDatagrams())
    {
        char data[50];
        socket.readDatagram(data, 50);
        qDebug()<<"Read : "<<data;
//        qDebug()<<"Port : "<<socket.localPort();
    }
}

void Worker::broadcast()
{
    qDebug()<<"Broadcasting >>>";
    timer.start();
}
