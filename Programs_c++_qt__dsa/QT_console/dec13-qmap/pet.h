#ifndef PET_H
#define PET_H

#include <QObject>

class Pet : public QObject
{
    Q_OBJECT


    int m_age;
    QString name;

public:
    explicit Pet(QObject *parent = 0);

    void setName(QString &m);
    void setAge(int age);
    int getAge();
    QString getName();
signals:

public slots:

};

#endif // PET_H
