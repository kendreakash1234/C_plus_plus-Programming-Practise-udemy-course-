#ifndef TEST_H
#define TEST_H

#include <QObject>
#include <QDebug>
#include <QTimer>
#include <QTime>

class test : public QObject
{
    Q_OBJECT
public:
    explicit test(QObject *parent = 0);

signals:

public slots:
    void timeout();
    void doStuff();

private:
    QTimer Qtimer;
    int number;
};


#endif // TEST_H
