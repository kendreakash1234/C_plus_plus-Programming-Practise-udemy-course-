#include <iostream>
using namespace std;

int sum(int n,...)
{
    va_list l;
    va_start(l,n);
    int s=0;
    int x;
    for(int i=0;i<n;i++)
    {
        x=va_arg(l);
        s+=x;

    }
    va_end();
    return s;
}

int main()
{
    cout<<sum(3,1,2,3);
    return 0;
}

