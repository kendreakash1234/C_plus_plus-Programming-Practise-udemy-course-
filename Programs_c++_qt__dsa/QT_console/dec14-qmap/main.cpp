#include <QCoreApplication>
#include <QMap>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    qDebug()<<"Started";

    QMap<QString,int> ages;
    ages.insert("Akash",25);
    ages.insert("nishant",24);
    ages.insert("harish",28);
    ages.insert("Aaksh",25);
    qDebug()<<"Keys : "<<ages.keys();
    qDebug()<<"values : "<<ages.values();
    qDebug()<<"Age of akash "<<ages["Akash"];
    foreach(QString key,ages.keys())
    {
        qDebug()<<key;
    }

    qDebug()<<"Ended!";
    return a.exec();
}
