#include <QCoreApplication>
#include <QDebug>
#include <QFile>
QByteArray
makeData()
{
     QByteArray ar;
    for(int i=0;i<10;i++)
    {

        ar.append(72);
        ar.append(101);
        ar.append(108);
        ar.append(108);
        ar.append(111);
        ar.append(33);
        ar.append(13);
        ar.append(10);

    }
    return ar;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QByteArray data=makeData();
    qDebug()<<data;
    QFile file("data.txt");
    if(file.open(QIODevice::WriteOnly))
    {
             file.write(data);
             file.close();
             qDebug()<<"Done";
    }


    return a.exec();
}
