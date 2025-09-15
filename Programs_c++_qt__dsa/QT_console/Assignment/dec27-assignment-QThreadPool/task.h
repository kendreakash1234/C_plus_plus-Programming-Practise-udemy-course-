#ifndef TASK_H
#define TASK_H

#include <QObject>
#include <QRunnable>
#include <QThread>
#include <QDebug>

class Task : public QObject,public QRunnable
{
    Q_OBJECT
public:
    explicit Task(QObject *parent = 0);
    ~Task();
signals:

public slots:

    void run();
};

#endif // TASK_H
