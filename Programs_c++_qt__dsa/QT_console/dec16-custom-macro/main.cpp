#include <QCoreApplication>
#include <QDebug>

#define add(a,b) a+b


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    qDebug()<<add(4,7);
    qDebug()<<add(true,true);
    qDebug()<<add(false,true);
    qDebug()<<add("test",12);
    return a.exec();
}
