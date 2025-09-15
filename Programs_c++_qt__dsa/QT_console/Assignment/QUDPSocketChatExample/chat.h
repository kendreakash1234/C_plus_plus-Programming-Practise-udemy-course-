#ifndef CHAT_H
#define CHAT_H

#include <QObject>
#include <QDebug>
#include <QUdpSocket>

class Chat : public QObject
{
    Q_OBJECT
public:
    explicit Chat(QObject *parent = 0);

signals:

public slots:
    void command(QString value);
    void send(QString value);
    void readyRead();

private:
    QString name;
    QUdpSocket socket;
    quint16 port;

};

#endif // CHAT_H
