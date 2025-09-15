#include <QCoreApplication>
#include <QTimer>
#include <QProcess>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QProcess process;
    process.start("notepad.exe");
//    QTimer::singleShot(3000,&process,&QProcess::terminate);
    return a.exec();
}
