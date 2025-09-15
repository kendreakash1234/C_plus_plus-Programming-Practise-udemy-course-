#include <QCoreApplication>
#include <QDebug>
#include <QDir>
#include <QFileInfo>
#include <QFileInfoList>

void list(QDir &dir)
{
    qDebug()<<"________________";
    foreach (, container) {

    }
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QDir dir(QCoreApplication::applicationDirPath());
    qDebug()<<dir.dirName();
    qDebug()<<dir.absolutePath();
    dir.cdUp();
    qDebug()<<dir.absolutePath();
    list(dir);

    return a.exec();
}
