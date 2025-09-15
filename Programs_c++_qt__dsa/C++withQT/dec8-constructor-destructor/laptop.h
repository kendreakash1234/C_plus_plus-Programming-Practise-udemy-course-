#ifndef LAPTOP_H
#define LAPTOP_H

#include <QObject>
#include<QDebug>

class Laptop : public QObject
{
    Q_OBJECT
public:
    //constructor
    explicit Laptop(QObject *parent = nullptr   ,QString name=" ");

    //destructor
    ~Laptop();

    int weight;
    QString name;
    double asKilo();
    void test();
signals:

public slots:

};

#endif // LAPTOP_H
