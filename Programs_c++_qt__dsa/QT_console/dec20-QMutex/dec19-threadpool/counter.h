#ifndef COUNTER_H
#define COUNTER_H

#include <QObject>
#include <QThread>
#include <QThreadPool>
#include <QRunnable>
//#include <QRandomGenerator>


class Counter : public QRunnable
{
public:
    Counter();
public:
    void run();
};

#endif // COUNTER_H
