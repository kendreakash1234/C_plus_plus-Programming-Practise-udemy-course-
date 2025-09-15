#include <iostream>

using namespace std;

class Test
{
private:
    int a;
    int b;
public:
    static int count;
    Test()
    {
        a=10;
        b=20;
        count++;
    }
    static int getCount()
    {
//        a=11;
//        b=21;
        return count;
    }
};
int Test::count;
int main()
{
    static int a1;
    a1++;
    cout<<a1<<endl;
    Test t1;
    cout<<t1.getCount()<<endl;
    Test t2;
    cout<<t2.getCount()<<endl;
    cout<<Test::getCount()<<endl;
    return 0;
}

