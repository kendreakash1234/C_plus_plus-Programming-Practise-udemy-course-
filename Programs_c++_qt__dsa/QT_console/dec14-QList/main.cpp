#include <QCoreApplication>
#include <QList>
#include <QDebug>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QList<int> list;
    for(int i=0;i<5;i++)
    {
        list.append(i);
    }
//    list<<5<<6<<7<<8;
    list.replace(2,64);
    qDebug()<<"Length"<<list.length();
    qDebug()<<"Size"<<list.size();
    qDebug()<<"Count"<<list.count();
    for(int i=0;i<sizeof(list);i++)
    {
        qDebug()<<list[i];
    }

    qDebug()<<"Slice array";
//    QList<int> slice=list.sliced(1,3);
//    for(int i=0;i<slice.size();i++)
//    {
//        slice[i];
//    }
    return a.exec();
}
