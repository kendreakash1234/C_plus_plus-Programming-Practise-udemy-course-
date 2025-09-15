#ifndef TEST_H
#define TEST_H

#include <QObject>
#include <QDebug>

class Test : public QObject
{
    Q_OBJECT
public:
    explicit Test(QObject *parent = 0,QString name=" ");
    ~Test();
signals:

public slots:

};

#endif // TEST_H
