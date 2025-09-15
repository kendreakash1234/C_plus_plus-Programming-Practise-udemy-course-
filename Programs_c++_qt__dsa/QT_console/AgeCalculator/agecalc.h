#ifndef AGECALC_H
#define AGECALC_H

#include <QObject>
#include <QDebug>
class AgeCalc : public QObject
{
    Q_OBJECT
public:
    explicit AgeCalc(QObject *parent = 0);


    int age() const;
    void setAge(int age);

    QString name() const;
    void setName(const QString &name);

    int dogYears() const;
    int catYears() const;
    int humanYears() const;
signals:

public slots:

private:
    int m_age;
    QString m_name;
};

#endif // AGECALC_H
