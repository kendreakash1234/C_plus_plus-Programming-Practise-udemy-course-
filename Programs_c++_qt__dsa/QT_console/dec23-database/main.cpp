#include <QCoreApplication>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSql>
#include <QPluginLoader>
#include <QVariant>
#include <QDebug>

//void ConnectDB()
//{
//    qDebug()<<"Opening database";
//    QSqlDatabase db=QSqlDatabase::addDatabase("QMYSQL");
//    db.setHostName("db4free.net");
//    db.setDatabaseName("qtcadb");
//    db.setUserName("USERNAME");
//    db.setPassword("PASSWORD");

//    if(!db.open())
//    {
//        qDebug()<<"Failed to connect";
//        qDebug()<<db.lastError().text();
//        return;
//    }
//    qDebug()<<"Conneccted";
//    db.close();


//}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    return a.exec();
}

