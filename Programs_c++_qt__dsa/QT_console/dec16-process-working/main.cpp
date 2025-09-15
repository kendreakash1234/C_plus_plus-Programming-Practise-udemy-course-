#include <QCoreApplication>
#include <QDebug>
#include <QProcess>


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    qDebug()<<"Starting";
    QProcess pro;
    pro.execute("notepad.exe",QStringList()<<"Akash");
    qDebug()<<"Exit code:"<<pro.exitCode();
    return a.exec();
}
