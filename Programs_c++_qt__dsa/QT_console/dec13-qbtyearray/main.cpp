#include <QCoreApplication>
#include <QDebug>
#include <QByteArray>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QString s="Hello World";
    QByteArray buffer(s.toUtf8());
    buffer.append("!");
    qDebug()<<buffer;
    qDebug()<<buffer.rightJustified(20,'.');
    qDebug()<<buffer.at(buffer.length()-1);
    return a.exec();
}


