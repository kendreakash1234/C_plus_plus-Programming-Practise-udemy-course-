#include <QCoreApplication>
#include <QDebug>

template <typename T>;
void add(int x)
{
    qDebug()<< x;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    add<int>(3);
    return a.exec();
}
