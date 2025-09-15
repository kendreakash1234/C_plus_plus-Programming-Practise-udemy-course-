#include <iostream>
using namespace std;
void fun()
{
    static int g=1;
    int x=10;
    g++;
    cout<<g<<" "<<x<<endl;
}
int main()
{
    fun();
    fun();
    fun();
   
    return 0;
}

