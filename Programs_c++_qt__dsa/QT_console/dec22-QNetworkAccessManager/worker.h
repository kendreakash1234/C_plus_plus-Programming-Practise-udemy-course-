#ifndef WORKER_H
#define WORKER_H

#include <QObject>
#include <QDebug>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <QAuthenticator>
#include <QNetworkProxy>

class Worker : public QObject
{
    Q_OBJECT
public:
    explicit Worker(QObject *parent = 0);

signals:
public slots:
    void get(QString location);
    void post(QString location,QByteArray data);
private slots:
    void ReadyRead();
    void authenticationRequired(QNetworkReply *reply,QAuthenticator *authenticator);
    void encrypted(QNetworkReply *reply);
    void finished(QNetworkReply *reply);
    void preSharedAuthenticationRequired(QNetworkReply *reply,QSslPreSharedKeyAuthenticator *authenticator);
    void sslErrors(QNetworkReply *reply, const QList<QSslError> &errors);
private:
    QNetworkAccessManager manager;
};

#endif // WORKER_H
