#include <iostream>

using namespace std;

class Base
{
    int x;
public:
    Base()
    {
        cout<<"Default constructor of Base class"<<endl;
    }
    Base(int x)
    {
        this->x=x;
        cout<<"Parameterized constructor of Base class"<<endl;
    }
};
class Derived:public Base
{
    int y;

public:
    Derived()
    {
        cout<<"Default constructor of Derived class"<<endl;
    }
    Derived(int x,int y):Base(x)
    {
        this->y=y;
        cout<<"Parameterized constructor of Derived class"<<endl;
    }
};

int main()
{
    Derived d(4,8);
    return 0;
}

