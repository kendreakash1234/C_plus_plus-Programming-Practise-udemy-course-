#include "pet.h"

Pet::Pet(QObject *parent) :
    QObject(parent)
{
}

void Pet::setName(QString &m)
{
    name=m;
}

void Pet::setAge(int age)
{
    m_age=age;
}

//int getAge()
//{
//    return m_age;
//}

//QString getName()
//{
//    return name;
//}
