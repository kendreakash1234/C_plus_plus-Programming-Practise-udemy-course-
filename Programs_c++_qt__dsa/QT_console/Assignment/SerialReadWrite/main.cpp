#include <QCoreApplication>
#include <QtSerialPort/QSerialPort>
#include <QDebug>
#include <QtSerialPort/QSerialPortInfo>
#include <QList>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    qDebug()<<"Working";
        QList<QSerialPortInfo> q=QSerialPortInfo::availablePorts();

    foreach(const QSerialPortInfo &info,QSerialPortInfo::availablePorts())
    {

    }

    return a.exec();
}
