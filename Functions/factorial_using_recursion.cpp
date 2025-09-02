#include <iostream>
using namespace std;

unsigned long long Factorial(unsigned long long n){
    if(n==1)
        return 1;
    return n*Factorial(n-1);
}

int main()
{
    int num{0};
    cout<<"Enter the number "<<endl;
    cin>>num;
    cout<<Factorial(num);
    return 0;
}