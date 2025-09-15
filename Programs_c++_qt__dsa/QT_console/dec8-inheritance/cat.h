#ifndef CAT_H
#define CAT_H

#include <QObject>
#include<QDebug>
#include "animal.h"


class cat : public Animal
{
    Q_OBJECT
public:
    explicit cat(QObject *parent = 0);
    bool isAlive();

    bool hasBackbone();
    void bark();

public slots:

};

#endif // CAT_H
