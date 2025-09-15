#include <QCoreApplication>
#include <QQueue>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QQueue<int> queue;
    queue.enqueue(6);
    queue.enqueue(2);
    queue.enqueue(5);
    queue.enqueue(1);
    queue.dequeue();
    queue.dequeue();
    queue.enqueue(8);
    queue.enqueue(4);
    queue.enqueue(0);
    qDebug()<<"Using foreach loop";
    foreach (int a, queue) {
        qDebug()<<a;
    }
//    qDebug()<<"Using while loop";

//    while(!queue.empty())
//    {
//        qDebug()<<queue.dequeue();
//    }
    qDebug()<<"First element in queue is "<<queue.head();
    qDebug()<<"Last element of queue is "<<queue.back();
    qDebug()<<"Size of queue is "<<queue.size();
    return a.exec();
}
