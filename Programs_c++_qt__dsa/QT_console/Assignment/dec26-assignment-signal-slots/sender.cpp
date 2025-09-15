#include "sender.h"

Sender::Sender(QObject *parent) :
    QObject(parent)
{
}

void Sender::run(QString name)
{
    emit sent(name);
}
