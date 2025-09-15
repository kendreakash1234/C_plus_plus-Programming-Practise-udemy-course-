#include <iostream>

using namespace std;

class Parent
{
public:
    virtual void display()
    {
        cout<<"This is display method of parent"<<endl;
    }
};

class Child:public Parent
{
public:
    void display()
    {
        cout<<"This is display method of Child"<<endl;
    }
};

int main()
{
    Parent p;
    p.display();
    Child c;
    c.display();
    Parent *ptr;
    ptr=&c;
    ptr->display();
    return 0;
}

