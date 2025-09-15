#ifndef CALC_H
#define CALC_H

#include <QObject>

class Calc : public QObject
{
    Q_OBJECT
public:
    explicit Calc(QObject *parent = 0);

   int dogYears(int age);
   int catYears(int age);
signals:

public slots:

};

#endif // CALC_H
