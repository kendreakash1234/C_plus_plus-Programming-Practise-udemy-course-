#ifndef client_H
#define client_H

#include <QObject>
#include <QDebug>
#include <QTcpSocket>

class client : public QObject
{
    Q_OBJECT
public:
    explicit client(QObject *parent = 0);
    void setSocket();
signals:

public slots:
    void connectedToServer();
    void disconnectedFromServer();
    void readyToRead();
private:
    QTcpSocket *client1;
};

#endif // client_H
