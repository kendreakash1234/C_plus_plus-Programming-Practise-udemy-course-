#include <iostream>

using namespace std;

class Base
{
private:
    int a;
protected:
    int b;
public:
    int c;
    void display()
    {
        a=10;
        b=20;
        c=30;
    }
};
class Derived:public Base
{
   void display()
    {
//        a=10;  //derived class can not accessed private members
        b=20;
        c=30;
    }
};

int main()
{
    Base b;
 /* b.a=10;
    b.b=15;*/  // object can not access private and protected members
    b.c=20;
    b.display();
    return 0;
}

