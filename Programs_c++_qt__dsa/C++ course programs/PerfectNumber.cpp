#include <iostream>

using namespace std;

int main()
{
    int num;
    cout<<"Enter the number"<<endl;
    cin>>num;
    int sum=0;
    cout<<"Factors of "<<num<<" are "<<endl;
    for(int i=1;i<num;i++)
    {
        if(num%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==num)
    {
        cout<<num<<" is perfect number";
    }
    else
    {
        cout<<num<<" is not perfect number";
    }
    return 0;
}

