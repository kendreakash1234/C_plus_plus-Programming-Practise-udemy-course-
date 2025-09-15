#ifndef ANIMAL_H
#define ANIMAL_H

#include <QObject>
#include<QDebug>
class Animal : public QObject
{
    Q_OBJECT
public:
    //constructor
    explicit Animal(QObject *parent = 0);

    //destructor

    bool isAlive()
    {
        return true;
    }

signals:

public slots:

};

#endif // ANIMAL_H
