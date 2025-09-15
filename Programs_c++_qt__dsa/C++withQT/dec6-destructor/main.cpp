#include <iostream>

using namespace std;

class Test
{
public:
    int *p;
    Test()
    {
        p=new int[10];
        cout<<"Test created"<<endl;
    }
    ~Test()
    {
        delete []p;
        cout<<"Test destroyed"<<endl;
    }
};

void fun()
{
    Test *p=new Test();//heap
    delete p;
}

int main()
{
    Test t;//stack
    fun();
    return 0;
}

