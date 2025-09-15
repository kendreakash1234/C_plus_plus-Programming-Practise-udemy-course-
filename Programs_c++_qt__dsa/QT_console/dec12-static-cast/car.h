#ifndef CAR_H
#define CAR_H

#include <QObject>

class Car : public QObject
{
    Q_OBJECT
public:
    explicit Car(QObject *parent = 0);

    void display();
signals:

public slots:

};

#endif // CAR_H
