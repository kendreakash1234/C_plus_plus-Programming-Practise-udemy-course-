#ifndef ANIMAL_H
#define ANIMAL_H

#include <QObject>

class Animal : public QObject
{
    Q_OBJECT
public:
    explicit Animal(QObject *parent = 0);

    void speak();
signals:

public slots:

};

#endif // ANIMAL_H
