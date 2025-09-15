#include <iostream>

using namespace std;

int power(int x, int y);

int main()
{
    int a,b,c;
    cout<<"Enter value of a and b"<<endl;
    cin>>a>>b;
    c=power(a,b);
    cout<<"power of "<<a<<" to the "<<b<<" is = "<<c;
    return 0;
}

int power(int x,int y)
{
    int result=1;
    for(int i=1;i<=y;i++)
    {
        result=result*x;
    }
    return result;
}