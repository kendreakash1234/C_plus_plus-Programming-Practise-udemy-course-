#include <QCoreApplication>
#include <QFile>
#include <QDebug>

void readLines(QFile &file)
{
    qDebug()<<"Starts readline";
    if(!file.isReadable())
    {
        return;
    }
    file.seek(0);
    while(!file.atEnd())
    {
        qDebug()<<file.readLine();
    }

}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QString fileName="test.txt";

    QFile file(fileName);
    if(file.open(QIODevice::ReadOnly))
    {
        readLines(file);
    }
    else
    {
        qDebug()<<"Unable to read file";
    }
    qDebug()<<"Completed";
    return a.exec();
}
