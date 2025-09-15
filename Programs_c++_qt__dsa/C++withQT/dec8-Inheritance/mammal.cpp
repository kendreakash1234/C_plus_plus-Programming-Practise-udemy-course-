
#include "mammal.h"

mammal::mammal(QObject *parent) :Animal(parent)
{
    qDebug()<<this<<" constructed";

}
