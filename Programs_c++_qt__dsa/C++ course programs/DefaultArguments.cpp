#include <iostream>
using namespace std;

int add(int x=0,int y=0)
{
    return x+y;
}
int main()
{
    cout<<add()<<endl;
    cout<<add(4)<<endl;
    cout<<add(4,5)<<endl;
    return 0;
}

 