#include <QCoreApplication>
#include <QTextStream>
#include <QDebug>
#include <QFile>

void write(QFile &file)
{
    if(!file.isWritable())
    {
       qDebug()<<"Unable to write file";
       return;
    }
    QTextStream stream(&file);

}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QString filename="test.txt";
    QFile file(filename);

    if(file.open(QIODevice::ReadWrite))
    {
        QTextStream stream(&file);
//       qDebug()<<"stream encoding"<<stream.encoding();
       write(stream);
       read(stream);

       file.close();
    }
    else
    {
        qDebug()<<file.errorString();
    }
    return a.exec();
}
