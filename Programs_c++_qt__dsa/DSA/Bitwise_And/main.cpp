#include <iostream>

using namespace std;

int main()
{
    int a=3;
    int b=6;
    cout << "BITWISE AND" << endl;
    cout<<(a&b)<<endl;
    cout << "BITWISE OR" << endl;
    cout<<(a|b)<<endl;
    cout << "BITWISE XOR" << endl;
    cout<<(a^b)<<endl;
    cout << "BITWISE LEFT SHIFT" << endl;
    cout<<(a<<1)<<endl;
    cout<<(a<<2)<<endl;
    cout<<(a<<b)<<endl;
    cout << "BITWISE RIGHT SHIFT" << endl;
    cout<<(a>>1)<<endl;
    cout<<(a>>2)<<endl;
    cout<<(a>>b)<<endl;
    cout<<"BITWISE NOT"<<endl;
    cout<<"SIGNED"<<endl;
    cout<<(~a)<<endl;
    cout<<"UNSIGNED"<<endl;
    unsigned int x=5;
    cout<<~x<<endl;



    return 0;
}

