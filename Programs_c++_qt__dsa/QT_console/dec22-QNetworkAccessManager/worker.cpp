#include "worker.h"

Worker::Worker(QObject *parent) :
    QObject(parent)
{
    connect(&manager,&QNetworkAccessManager::authenticationRequired,this,&Worker::authenticationRequired);
    connect(&manager,&QNetworkAccessManager::encrypted,this,&Worker::encrypted);
    connect(&manager,&QNetworkAccessManager::finished,this,&Worker::finished);
    connect(&manager,&QNetworkAccessManager::preSharedAuthenticationRequired,this,&Worker::preSharedAuthenticationRequired);
    connect(&manager,&QNetworkAccessManager::sslErrors,this,&Worker::sslErrors);
}

void Worker::get(QString location)
{

}

void Worker::post(QString location, QByteArray data)
{

}

void Worker::ReadyRead()
{

}

void Worker::authenticationRequired(QNetworkReply *reply, QAuthenticator *authenticator)
{

}

void Worker::encrypted(QNetworkReply *reply)
{

}

void Worker::finished(QNetworkReply *reply)
{

}

void Worker::preSharedAuthenticationRequired(QNetworkReply *reply, QSslPreSharedKeyAuthenticator *authenticator)
{

}

void Worker::sslErrors(QNetworkReply *reply, const QList<QSslError> &errors)
{

}
