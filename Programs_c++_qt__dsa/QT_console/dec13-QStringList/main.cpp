#include <QCoreApplication>
//#include <QStringList>
#include <QDebug>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QString s="Hello , how are you";
    QStringList sl=s.split(" ");
    qDebug()<<sl;
    foreach(QString qs,s)
    {
        qDebug()<<qs;
    }
    sl.sort(Qt::CaseInsensitive);
    qDebug()<<sl;

    QString myvar="how";
    if(sl.contains(myvar))
    {
        qDebug()<<"Hawan karenge";
    }
    return a.exec();
}
