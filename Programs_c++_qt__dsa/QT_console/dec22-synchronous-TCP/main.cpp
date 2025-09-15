#include <QCoreApplication>
#include <QDebug>
#include <QTcpSocket>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QTcpSocket socket;
    socket.connectToHost("voidrealms.com",80);
    qDebug()<<"Connecteing...";

    if(socket.waitForConnected(6000))
    {
        qDebug()<<"Connected";
        QByteArray data;
        data.append("Get / HTTP/1.1\r\n");
        data.append("Host: local\r\n");
        data.append("Connection: close\r\n");
        data.append("\r\n");
        socket.write(data);
        socket.waitForBytesWritten();
    if(socket.waitForReadyRead(60000))
    {
        QByteArray response=socket.readAll();
        qDebug()<<"Response : "<<response.length()<<"Bytes";
        qDebug()<<"Response"<<response;
    }

    socket.waitForDisconnected();
    qDebug()<<"Done";
    }
    else
    {
        qDebug()<<socket.errorString();
    }
    return a.exec();
}
