#ifndef WORKER_H
#define WORKER_H

#include <QObject>
#include <QDebug>
#include <QHostAddress>
#include <QNetworkInterface>
#include <QUdpSocket>
#include <QTimer>
#include <QDateTime>


class Worker : public QObject
{
    Q_OBJECT
public:
    explicit Worker(QObject *parent = 0);

signals:

public slots:
    void start();
    void stop();
    void timeout();
    void readyRead();
    void broadcast();

private:
    QUdpSocket socket;
    QTimer timer;
    qint16 port;
};

#endif // WORKER_H
