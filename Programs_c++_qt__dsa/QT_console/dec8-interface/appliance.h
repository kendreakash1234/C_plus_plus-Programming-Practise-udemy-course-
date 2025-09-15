#ifndef APPLIANCE_H
#define APPLIANCE_H

#include <QObject>
#include<QDebug>
#include "Freezer.h"
#include "Microwave.h"
#include "Toaster.h"

class Appliance : public QObject,public freezer, microwave , toaster
{
    Q_OBJECT
public:
    explicit Appliance(QObject *parent = 0);

    bool cook();
    bool grill();
    bool freeze();
signals:

public slots:

};

#endif // APPLIANCE_H
