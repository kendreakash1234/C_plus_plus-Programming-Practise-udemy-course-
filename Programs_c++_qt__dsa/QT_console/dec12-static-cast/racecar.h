#ifndef RACECAR_H
#define RACECAR_H

#include <QObject>
#include "car.h"

class RaceCar : public Car
{
    Q_OBJECT
public:
    explicit RaceCar(QObject *parent = 0);
    void display();
signals:

public slots:

};

#endif // RACECAR_H
