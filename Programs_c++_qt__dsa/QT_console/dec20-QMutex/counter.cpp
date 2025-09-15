#include "counter.h"

Counter::Counter(QMutex* mutex,int* value)
{
    m_mutex=mutex;
    m_value=value;
}

void Counter::run()
{
    m_mutex->lock();

    QThread::currentThread()->msleep(50);
    *m_value=*m_value+1;
    qDebug()<<*m_value<<QThread::currentThread();

    m_mutex->unlock();
}

