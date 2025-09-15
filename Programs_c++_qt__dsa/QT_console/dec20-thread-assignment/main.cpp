#include <QCoreApplication>
#include <QDebug>
#include <QFuture>
#include <QThread>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    return a.exec();
}
