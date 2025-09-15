#include <QCoreApplication>
#include <QDebug>
#include <QObject>
#include "sender.h"
#include "receiver.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Sender s;
    Receiver r;
    QObject::connect(&s,&Sender::sent,&r,&Receiver::Received);
    s.run("Akash");
    return a.exec();
}
