#include <QCoreApplication>
#include <QDebug>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    //Implicit
    int v=67;
    double s=v;
    qDebug()<<s;

    //Explicit
    double d=4.35;
    int f=(int)d;
    qDebug()<<f;
    return a.exec();
}
