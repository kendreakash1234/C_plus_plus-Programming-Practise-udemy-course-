#include<iostream>

using namespace std;

int main()
{   
    int a;
    int b = 21;
    int c(23);
    int d{43};
    cout<<"UnInitialized \t\t\ta = "<<a<<endl;
    cout<<"C-like Initialization \t\tb = "<<b<<endl;
    cout<<"Constructor Initialization \tc = "<<c<<endl;
    cout<<"C++ 11 Initialization \t\td = "<<d<<endl;
    
    return 0;
}