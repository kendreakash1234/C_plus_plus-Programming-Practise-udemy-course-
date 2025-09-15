#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    qint8 value8=0;
    qint16 value16=0;
    qint32 value32=0;
    qint64 value64=0;
    qintptr valueptr=0;

    qDebug()<<"Size of qint8 is "<<sizeof(value8);
        qDebug()<<"Size of qint16 is "<<sizeof(value16);
            qDebug()<<"Size of qint32 is "<<sizeof(value32);
                qDebug()<<"Size of qint64 is "<<sizeof(value64);
                    qDebug()<<"Size of qintptr is "<<sizeof(valueptr);

    return a.exec();
}
