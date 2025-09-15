#include <QCoreApplication>
#include <QFile>
#include <QTextStream>
#include <QDebug>

bool write(QString filename)
{
    QFile file(filename);
    if(!file.open(QIODevice::WriteOnly))
        return false;
    QDataStream out(&file);
    out.setVersion(QDataStream::Qt_5_2);

    QString title="the answer is 43";
    qint8 num=43;

    out<<title;
    out<<num;
    file.close();
    return true;
}
bool read(QString filename)
{

    QFile file(filename);
    if(!file.open(QIODevice::ReadOnly))
        return false;

    QDataStream in(&file);
    if(in.version()!=QDataStream::Qt_5_2)
    {
        qCritical()<<"status not match";
        file.close();
        return false;
    }
    QString title;
    qint8 num;
    in>>title;
    in>>num;

    qDebug()<<title;
    qDebug()<<num;
    file.close();
    return true;

}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QString filename="test.txt";

    if(write(filename))
    {
        qDebug()<<"Saved";
        read(filename);
    }

    return a.exec();
}
