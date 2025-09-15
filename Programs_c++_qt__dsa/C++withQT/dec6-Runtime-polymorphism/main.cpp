
#include <iostream>

using namespace std;

class Car
{
public:
   virtual void start()=0;
   virtual void stop()=0;
};

class Innova:public Car
{
public:
    void start()
    {
        cout<<"Innova car starts"<<endl;
    }
    void stop()
    {
        cout<<"Innova car stops"<<endl;
    }
};

class Swift:public Car
{
public:
    void start()
    {
        cout<<"Swift car starts"<<endl;
    }
    void stop()
    {
        cout<<"Swift car stops"<<endl;
    }
};

int main()
{
    Car *c;
    c=new Innova();
    c->start();
    c->stop();
    c=new Swift();
    c->start();
    c->stop();
    return 0;
}

