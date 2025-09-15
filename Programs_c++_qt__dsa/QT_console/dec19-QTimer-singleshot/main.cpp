#include <QCoreApplication>
#include <QDebug>
#include <QTimer>

void test()
{
    qDebug()<<"Thank you for waiting";
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    qDebug()<<"Please wait.....";
    QTimer::singleShot(3000,&a,&test);
    return a.exec();
}
