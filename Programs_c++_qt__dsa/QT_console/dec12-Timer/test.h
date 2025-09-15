#ifndef TEST_H
#define TEST_H

#include <QObject>
#include <QTimer>
class Test : public QObject
{
    Q_OBJECT
public:
    explicit Test(QObject *parent = 0);

signals:

public slots:
    void timeout();
private:
    QTimer m_timer;
    int count;
};

#endif // TEST_H
