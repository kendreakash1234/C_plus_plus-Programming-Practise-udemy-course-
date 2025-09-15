#include <iostream>

using namespace std;
int add(int x,int y);
float add(float x, float y);
int add(int x,int y,int z);

int main()
{
    cout<<"Sum of 2 integers is "<<add(4,5)<<endl;
    cout<<"Sum of 2 floats is "<<add(6.5f,9.2f)<<endl;
    cout<<"Sum of 3 integers is = "<<add(3,6,4)<<endl;
    return 0;
}

int add(int x,int y)
{
    return x+y;
}
float add(float x,float y)
{
    return x+y;;
}
int add(int x,int y,int z)
{
   return x+y+z;
}