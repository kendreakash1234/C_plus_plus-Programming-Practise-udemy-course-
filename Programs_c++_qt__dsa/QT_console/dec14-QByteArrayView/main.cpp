#include <QCoreApplication>
#include<QDebug>
#include<QByteArray>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QByteArray mssg("Jcps wr cjner corc ");
//    QByteArrayView(mssg);
    qDebug()<<mssg;
    return a.exec();
}
