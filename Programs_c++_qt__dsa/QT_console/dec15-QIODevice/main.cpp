#include <QCoreApplication>
#include <QDebug>
#include <QIODevice>
#include <QBuffer>


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QBuffer buffer;

    if(buffer.open(QIODevice::ReadWrite))
    {
        QByteArray arr("Hello world");

        for(int i=0;i<5;i++)
        {
            buffer.write(arr);
            buffer.write("\n");
        }
        buffer.seek(0);
        qDebug()<<buffer.readAll();
    }
    buffer.close();

    return a.exec();
}
