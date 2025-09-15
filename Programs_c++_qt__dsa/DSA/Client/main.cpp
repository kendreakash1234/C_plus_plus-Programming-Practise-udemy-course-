#include <QCoreApplication>
#include "client.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    client client1;
    client1.setSocket();
    return a.exec();
}
