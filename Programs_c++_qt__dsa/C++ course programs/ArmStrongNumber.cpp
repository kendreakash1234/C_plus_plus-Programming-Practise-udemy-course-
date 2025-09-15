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
        sum=sum+(rem*rem*rem);
        temp/=10;
    }
    if(sum==num)
    {
        cout<<num<<" is Armstrong number";
    }
    else
    {
        cout<<num<<" is not Armstrong number";
    }
    return 0;
}

