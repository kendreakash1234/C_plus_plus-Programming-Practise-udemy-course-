#include <QCoreApplication>
#include <QDebug>

typedef QMap<QString , int> People;


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    People p;
    p.insert("Akash",25);
    p.insert("aksjdbrui",25);
    p.insert("ewfrtg",25);
    qDebug()<<p;
    return a.exec();
}
