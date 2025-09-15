#include "test.h"

Test::Test(QObject *parent) :
    QObject(parent)
{

}

void Test::run()
{
    qDebug()<<"Running "<<QThread::currentThread();
    m_timer.singleShot(3000,this,SLOT(timeout()));
    qDebug()<<"Finishing "<<QThread::currentThread();
}

void Test::timeout()
{
    qDebug()<<"Timeout "<<QThread::currentThread();

}
