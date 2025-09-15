#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QString s="Akash kendre";
    qDebug()<<s;
    qDebug()<<s.mid(2,5);
    qDebug()<<s.insert(0,"akjshdo ");
    qDebug()<<s.split(" ");
    qDebug()<<s.indexOf('A');

    return a.exec();
}
