#include <QCoreApplication>
#include <QDebug>

void testPointer(QObject *obj)
{
    qDebug()<<obj;
}

void testAddress(QObject &obj)
{
    qDebug()<<&obj;
}
void testCopy(QObject obj)
{
    qDebug()<<&obj;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QObject person;
    person.setObjectName("Akash");
    testPointer(&person);
    testAddress(person);
//    testCopy(person);
    return a.exec();
}
