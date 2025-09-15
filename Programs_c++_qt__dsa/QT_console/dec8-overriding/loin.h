#ifndef LOIN_H
#define LOIN_H

#include <QObject>
#include<QDebug>
#include "animal.h"
class Loin : public Animal
{
    Q_OBJECT
public:
    explicit Loin(QObject *parent = 0);

    void speak();
signals:

public slots:

};

#endif // LOIN_H
