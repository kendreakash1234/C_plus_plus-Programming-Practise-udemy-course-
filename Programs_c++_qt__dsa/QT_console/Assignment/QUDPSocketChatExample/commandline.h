#ifndef COMMANDLINE_H
#define COMMANDLINE_H

#include <QObject>
#include <QDebug>
#include <QTextStream>
#include <QThread>
#include <QtConcurrent>

class CommandLine : public QObject
{
    Q_OBJECT
public:
    explicit CommandLine(QObject *parent = nullptr, FILE *fileHandler=nullptr);
     void monitor();
signals:
    void command(QString value);
public slots:

private:
    QTextStream cin;

};

#endif // COMMANDLINE_H
