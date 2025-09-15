#include <iostream>
using namespace std;

template <class T>
T add(T x,T y)
{
    return x+y;
}
int main()
{
    cout<<"Sum of 2 integers is "<<add(4,5)<<endl;
    cout<<"Sum of 2 floats is "<<add(6.5f,9.2f)<<endl;
    return 0;
}

