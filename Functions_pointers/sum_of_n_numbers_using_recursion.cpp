#include <iostream>
using namespace std;

int Sum(int n){
    if(n==1)
        return 1;
    return n+Sum(n-1);
}

int main()
{
    int num{0};
    cout<<"Enter the number "<<endl;
    cin>>num;
    cout<<Sum(num);
    return 0;
}