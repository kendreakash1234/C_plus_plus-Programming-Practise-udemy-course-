#include <QCoreApplication>
#include<QDebug>
#include <QSet>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QSet<QString> people;
    people << "AKASH" << "Nishant" << "Harish" << "jayesh";
    people.insert("GURU");
    qDebug()<<people;

    foreach(QString person,people)
    {
        qDebug()<<person;
    }
    qDebug()<<"Contains Akash "<<people.contains("AKASH");
    return a.exec();
}
