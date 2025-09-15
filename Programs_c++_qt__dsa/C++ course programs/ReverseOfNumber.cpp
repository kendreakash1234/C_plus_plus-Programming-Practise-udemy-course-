#include <iostream>

using namespace std;

int main()
{
    int num;
    cout<<"Enter the number"<<endl;
    cin>>num;
    int temp=num;
    int sum=0,rem;
    while(temp>0)
    {
        rem=temp%10;
        sum=sum*10+rem;
        temp/=10;
    }
    cout<<"The reverse number of "<<num<<" is "<<sum;
    return 0;
}

