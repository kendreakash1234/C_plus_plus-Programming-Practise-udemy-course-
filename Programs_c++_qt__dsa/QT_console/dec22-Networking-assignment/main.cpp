#include <QCoreApplication>
#include <QDebug>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <QEventLoop>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QNetworkAccessManager manager;
    QNetworkRequest request(QUrl("https://postman-echo.com/get"));
    QNetworkReply* reply=manager.get(request);

    QEventLoop loop;
    a.connect(reply,&QNetworkReply::finished,&loop,&QEventLoop::quit);
    loop.exec();

    qDebug()<<reply->readAll();
    reply->deleteLater();
    return a.exec();
}
