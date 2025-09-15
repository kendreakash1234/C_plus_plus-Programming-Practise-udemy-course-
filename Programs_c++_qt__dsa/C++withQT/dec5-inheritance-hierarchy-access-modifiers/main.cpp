#include <iostream>

using namespace std;


class parent
{
private:
    int a;
protected:
    int b;
public:
    int c;
    void funParent()
    {
        a=10;
        b=20;
        c=30;
    }
};

class child:protected parent
{
    void funChild()
    {
        a=10;
        b=20;
        c=30;
    }
};

class grandchild:public child
{
    void funGrandChild()
    {
        a=10;
        b=20;
        c=30;
    }
};

int main()
{
    grandchild g;
    g.a=10;
    g.b=30;
    g.c=13;
    cout << "Hello World!" << endl;
    return 0;
}

