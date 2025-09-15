#include <iostream>

using namespace std;

int main()
{
    int c=15;
    [](){cout << "Hello World!" << endl;}();
    auto x=[](int a,int b){return a+b;}(10,5);
    [c](){cout<<c<<endl;}();
    cout<<x;
    return 0;
}

