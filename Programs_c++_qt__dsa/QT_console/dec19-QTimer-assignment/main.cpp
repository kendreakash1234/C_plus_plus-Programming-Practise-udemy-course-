#include <QCoreApplication>
#include <QTime>
#include <QTimer>
#include <QDebug>

void test()
{
qDebug()<<"Time"<<QTime::currentTime().toString();
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QTimer t;
    QTimer::singleShot(3000,&test);
    return a.exec();
}
