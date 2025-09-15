#ifndef CLIENT_H
#define CLIENT_H

#include <QObject>
#include <QDebug>
#include <QTcpServer>
#include <QTcpSocket>

class Client : public QObject
{
    Q_OBJECT
public:
    explicit Client(QObject *parent = 0);
    ~Client();

signals:

public slots:
    void connectedToServer();
    void disconnectedFromServer();
    void readyToRead();
    void Serror(QAbstractSocket::SocketError);
private:
    QTcpSocket *tcpClient;
};


#endif // CLIENT_H
