#include <QCoreApplication>
#include <QDebug>
#include <QSettings>
#include <QTextStream>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QCoreApplication::setOrganizationName("Akash");
    QCoreApplication::setOrganizationDomain("kendre");
    QCoreApplication::setApplicationName("Ak");

    QSettings settings(QCoreApplication::organizationName(),QCoreApplication::applicationName());
    if(settings.contains("name"))
    {
        qDebug()<<"Hello "<<settings.value("name").toString();
        qDebug()<<settings.applicationName()<<settings.organizationName();
    }
    else
    {
        QTextStream qin(stdin);
        qDebug()<<"Enter your name";
        QString name=qin.readLine();
        settings.setValue("name",name);
        qDebug()<<"Close this application & reopen it";
    }

    return a.exec();
}
