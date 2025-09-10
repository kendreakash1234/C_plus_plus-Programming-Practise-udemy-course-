#include <iostream>
using namespace std;

template <typename T1, typename T2>
void func(T1 a, T2 b){
    cout<<a<<" "<<b<<endl;
}

template <typename T3>
T3 add1(T3 a, T3 b){
    return a + b;
}

int main()
{
    cout<<"single template"<<endl;
    cout<<add1(3,4)<<endl;
    cout<<add1(3.1,4.2)<<endl;
    cout<<add1('0','3')<<endl;
    cout<<"double template"<<endl;
    func(4,3);
    func(4,3.2);
    func(4,'C');
    return 0;
}