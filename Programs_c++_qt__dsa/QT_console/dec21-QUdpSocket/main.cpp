#include <QCoreApplication>
#include <QDebug>

void test()
{
    qDebug()<<Q_FUNC_INFO;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    test();
    return a.exec();
}
