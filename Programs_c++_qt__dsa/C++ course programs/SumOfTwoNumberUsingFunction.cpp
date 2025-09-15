#include <iostream>

using namespace std;

float add(float x, float y);

int main()
{
    float a,b,c;
    cout<<"Enter value of a and b"<<endl;
    cin>>a>>b;
    c=add(a,b);
    cout<<"Sum = "<<c;
    return 0;
}

float add(float x,float y)
{
    float z;
    z=x+y;
    return z;
}