#include <iostream>

using namespace std;

class Base
{
public:
    void fun1()
    {

    }
};

class Derived:public Base
{
public:
    void func2()
    {

    }
};

int main()
{
    Derived d;
    Derived *ptr=&d;
    ptr->func2();
    ptr->fun1();

    Derived d1;
    Base *ptr1=&d1;
    ptr1->fun1();
//    ptr1->fun2();

    Base b;
    Base *ptr2=&b;
    ptr2->fun1();
//    ptr2->fun2();

//    Base b1;
//    Derived *ptr3=&b1;
//    ptr3->fun1();
//    ptr3->fun2();
    return 0;
}

