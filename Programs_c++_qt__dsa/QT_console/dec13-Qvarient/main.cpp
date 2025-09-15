#include <QCoreApplication>
#include<QDebug>
#include <QVariant>
#include <QString>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QVariant value=1;
    QVariant value2="Akash kendre";
    qDebug()<<value<<value2 ;
    return a.exec();
}
