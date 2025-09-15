#include <QCoreApplication>
#include<QDebug>
#include<QList>

QList<int> makeList()
{
    QList<int> list;
    for(int i=0;i<10;i++)
    {
        list.append(i);
    }
    return list;
}
void find(QList<int> list,int value)
{
    int count=0;
    for(int i=0;i<10;i++)
    {   count++;
        if(list[i]==value)
            break;
    }
    qDebug()<<value<<" Found at "<<count;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QList<int> list=makeList();
    qDebug()<<list;
    find(list,9);
    return a.exec();
}
