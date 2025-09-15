#include <iostream>

using namespace std;

class YourClass;

class Myclass
{
private:
    int x;
public:
    int y;
protected:
    int z;
public:
    friend YourClass;
};

class YourClass
{
public:
    Myclass m;
    void display()
    {
        m.x=34;
        cout<<m.x;
    }
};

int main()
{
    YourClass b;
    b.display();
    cout << "Hello World!" << endl;
    return 0;
}

