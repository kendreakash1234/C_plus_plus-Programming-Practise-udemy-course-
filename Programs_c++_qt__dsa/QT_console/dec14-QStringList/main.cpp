#include <QCoreApplication>
#include <QDebug>
#include <QStringList>


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QStringList names;
    names.append("Nishant");
    names << "Harish" << "Jayesh";

       names.replaceInStrings("a","@");
       names.sort();
    foreach(QString n,names)
    {
        qDebug()<<n;
    }
    QString people=names.join(",");
    qDebug()<<people;
    QString me ="Nishant";
    qDebug()<<"Index of jayesh "<<names.indexOf(me);
     return a.exec();
}
