#include <QCoreApplication>
#include <QDebug>
#include <QHostAddress>
#include <QtNetwork/QAbstractSocket>
#include <QtNetwork/QNetworkInterface>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QList<QHostAddress> list=QNetworkInterface::allAddresses();

    for(int i=0;i<list.count();i++)
    {
        QHostAddress address = list.at(i);
        qDebug()<<address.toString();

        //never goes on network
//        qDebug()<<"\tLoopback : "<<address.isLoopback();


         switch(address.protocol())
        {
        case QAbstractSocket::UnknownNetworkLayerProtocol:
            qDebug()<<"\t\tprotocol : unknown";
            break;
        case QAbstractSocket::AnyIPProtocol:
            qDebug()<<"\t\tprotocol : Any";
            break;
        case QAbstractSocket::IPv4Protocol:
            qDebug()<<"\t\tprotocol : IPV4";
            break;
        case QAbstractSocket::IPv6Protocol:
            qDebug()<<"\t\tprotocol : IPV6";
            break;
        }
    }
    return a.exec();
}
