#include <QCoreApplication>
#include <QFile>
#include <QDebug>
#include <QDateTime>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString fileName="test.txt";

    QFile file(fileName);

//    if(file.open(QIODevice::WriteOnly))
//    {
//         QByteArray data;
//         QString now=QDateTime::currentDateTime().toString();
//         data.append(now);
//         data.append(" ");
//         data.append("Hello world");
//         file.write(data);
//         qDebug()<<"Wrote info";
//    }
//    else
//    {
//        qt_error_string("Something is wrong");
//    }
//    file.close();
    if(file.open(QIODevice::ReadOnly))
    {
        qDebug()<<file.readAll();
    }
    return a.exec();
}
