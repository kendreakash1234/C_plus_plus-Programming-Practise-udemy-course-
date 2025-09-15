#include <QCoreApplication>
#include <QDebug>
#include <QLoggingCategory>

//Q_DECLARE_LOGGING_CATEGORY(network);
//Q_LOGGING_CATEGORY(network,"network");

void test(QLoggingCategory &lcat)
{
    qDebug()<<"Debug";
    qWarning()<<"Warning";
    qCritical()<<"Critical";
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    qDebug()<<"Test";
//    qWarning(network) <<"Test";
    QLoggingCategory cats("cats");


    cats.setEnabled(QtMsgType::QtDebugMsg,false);
//    cats.setEnabled(QtMsgType::QTypeInfo,false);
    cats.setEnabled(QtMsgType::QtWarningMsg,false);

    QLoggingCategory dogs("dogs");
    dogs.setEnabled(QtMsgType::QtDebugMsg,false);
//    dogs.setEnabled(QtMsgType::QTypeInfo,false);
    dogs.setEnabled(QtMsgType::QtWarningMsg,false);

    test(cats);
    test(dogs);
    return a.exec();
}
