#ifndef CAT_H
#define CAT_H

#include <QObject>
#include <QDebug>

class Cat : public QObject
{
    Q_OBJECT
public:
    explicit Cat(QObject *parent = 0);
    void public_test();
signals:

public slots:
        void test();
        void play();
private slots:
        void meow();
        void sleep();
        void speak(QString value);
private :
        void private_test();
};

#endif // CAT_H
