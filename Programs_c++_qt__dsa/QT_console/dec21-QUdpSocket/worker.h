#ifndef WORKER_H
#define WORKER_H

#include <QObject>
#include <QDebug>
#include <QTimer>
#include <QDateTime>
#include <QUdpSocket>
//#include <QtNetworkDatagram>
#include <QTcpSocket>
#include <QNetworkProxy>
class Worker : public QObject
{
    Q_OBJECT
public:
    explicit Worker(QObject *parent = 0);
    QTcpSocket socket;
signals:

public slots:

};

#endif // WORKER_H
