#ifndef DOG_H
#define DOG_H

#include <QObject>
#include<QDebug>
#include "animal.h"

class Dog : public Animal
{
    Q_OBJECT
public:
    explicit Dog(QObject *parent = 0);

    bool hasBackbone();

    void bark();
signals:

public slots:

};

#endif // DOG_H
