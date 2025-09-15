#ifndef CAT_H
#define CAT_H

#include <QObject>

class Cat : public QObject
{
    Q_OBJECT
public:
    explicit Cat(QObject *parent = 0);
    void meow();
signals:

public slots:

};

#endif // CAT_H
