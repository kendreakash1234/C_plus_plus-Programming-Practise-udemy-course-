#ifndef ANIMAL_H
#define ANIMAL_H

#include <QObject>
#include<QDebug>
class Animal : public QObject
{
    Q_OBJECT
public:
    explicit Animal(QObject *parent = 0);

   virtual bool isAlive()
    {
        return true;
    }

signals:

public slots:

};

#endif // ANIMAL_H
