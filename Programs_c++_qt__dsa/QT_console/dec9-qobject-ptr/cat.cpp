#include "cat.h"
#include <QDebug>
Cat::Cat(QObject *parent) :
    QObject(parent)
{
}

void Cat::meow()
{
    qDebug()<<"MEOW";
}
