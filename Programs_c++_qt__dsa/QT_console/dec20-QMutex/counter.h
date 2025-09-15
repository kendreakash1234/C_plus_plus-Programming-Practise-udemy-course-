#ifndef COUNTER_H
#define COUNTER_H

#include <QMutex>
#include <QThread>
#include <QThreadPool>
#include <QDebug>
#include <QRunnable>

class Counter : public QRunnable
{
public:
    Counter(QMutex* mutex,int* value);
    void run();
private:
    QMutex* m_mutex;
    int* m_value;
};

#endif // COUNTER_H
