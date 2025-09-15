#include <QCoreApplication>
#include <QDebug>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString data="Hello my name is Akash";
    QByteArray encoded=data.toUtf8().toBase64();
    QByteArray decoded=QByteArray::fromBase64(encoded);
    qDebug()<<encoded;
    qDebug()<<decoded;
    return a.exec();
}
