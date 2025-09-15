#ifndef TEST_H
#define TEST_H

#include <QObject>
#include <QDebug>

class Test : public QObject
{
    Q_OBJECT
public:
    explicit Test(QObject *parent = 0);
    void Testing();
signals:
    void alarm(QString noise);

public slots:
    void wake(QString noise);
};

#endif // TEST_H
