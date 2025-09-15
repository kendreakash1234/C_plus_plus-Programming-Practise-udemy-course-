#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
#ifdef QT_DEBUG
    qDebug()<<"Running in debug build";
#elif
    qDebug()<<"Running in release build";
#endif
    return a.exec();
}
