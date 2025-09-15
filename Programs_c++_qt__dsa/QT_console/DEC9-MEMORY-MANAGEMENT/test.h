#ifndef TEST_H
#define TEST_H

#include <QObject>
#include "animal.h"
class Test : public QObject
{
    Q_OBJECT
public:
    explicit Test(QObject *parent = 0);
        Animal *dog;
    ~Test();

signals:

public slots:

};

#endif // TEST_H
