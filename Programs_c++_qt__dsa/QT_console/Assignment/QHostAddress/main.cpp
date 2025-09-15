#include <QCoreApplication>
#include <QHostAddress>
#include <QDebug>
#include <QNetworkInterface>
#include <QAbstractSocket>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QList<QHostAddress> list=QNetworkInterface::allAddresses();
    for(int i=0;i<list.count();i++)
    {
        QHostAddress address=list.at(i);
        qDebug()<<address.toString();
        qDebug()<<"\t LoopBack "<<address.isLoopback();
        switch(address.protocol())
        {
        case QAbstractSocket::UnknownNetworkLayerProtocol:
            qDebug()<<"\t\tProtocol : Unknown";
            break;
        case QAbstractSocket::AnyIPProtocol:
            qDebug()<<"\t\tProtocol : AnyIPProtocol";
            break;
        case QAbstractSocket::IPv4Protocol:
            qDebug()<<"\t\tProtocol : IPv4Protocol";
            break;
        case QAbstractSocket::IPv6Protocol:
            qDebug()<<"\t\tProtocol : IPv6Protocol";
            break;
        }
    }
    return a.exec();
}
