#include <iostream>

using namespace std;

float add(float x, float y);
float add(float x,float y,float z);

int main()
{
    float a,b,c;
    cout<<"Enter value of a and b and c"<<endl;
    cin>>a>>b>>c;
    cout<<"Sum of "<<a<<" and "<<b<<" is = "<<add(a,b)<<endl;
    cout<<"Sum of "<<a<<" , "<<b<<" and "<<c<<" is = "<<add(a,b,c)<<endl;
    return 0;
}

float add(float x,float y)
{
    float result;
    result=x+y;
    return result;
}
float add(float x,float y,float z)
{
    float result;
    result=x+y+z;
    return result;
}