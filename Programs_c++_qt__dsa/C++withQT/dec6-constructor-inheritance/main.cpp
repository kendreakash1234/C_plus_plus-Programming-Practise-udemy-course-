#include <iostream>

using namespace std;
class parent
{
public:
    parent()
    {
        cout<<"Parent constructor"<<endl;
    }
   virtual ~parent()
    {
        cout<<"Parent destructor"<<endl;
    }
};

class child:public  parent
{
public:
    child()
    {
        cout<<"child constructor"<<endl;
    }
    ~child()
    {
        cout<<"child destructor"<<endl;
    }
};

int main()
{
//    child c;
    parent *p=new child();

    delete p;
    return 0;
}

