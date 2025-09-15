#ifndef SOURCE_H
#define SOURCE_H

#include <QObject>

class Source : public QObject
{
    Q_OBJECT
public:
    explicit Source(QObject *parent = 0);

    void test();
signals:
    void mySignal(QString message);


public slots:
};

#endif // SOURCE_H
