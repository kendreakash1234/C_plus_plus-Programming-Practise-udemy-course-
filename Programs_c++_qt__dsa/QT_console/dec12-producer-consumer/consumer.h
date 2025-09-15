#ifndef CONSUMER_H
#define CONSUMER_H

#include <QObject>
#include <QDebug>
#include "producer.h"
class Consumer : public QObject
{
    Q_OBJECT
public:
    explicit Consumer(QObject *parent = 0);


signals:
public slots:
    void testing();

public slots:

};

#endif // CONSUMER_H
