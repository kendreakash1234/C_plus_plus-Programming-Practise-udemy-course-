#include <QCoreApplication>
//#include <QList>
#include <QDebug>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QString s="Hello welcome home";
    QList<QString> list=s.split(" ");
    foreach(QString w,list)
    {
        qDebug()<<w;
    }

//    QList<int> age({34,564,54,67,87});
//    age.append(64);
//    age.removeAt(5);
//    qDebug()<<age;

    return a.exec();
}
