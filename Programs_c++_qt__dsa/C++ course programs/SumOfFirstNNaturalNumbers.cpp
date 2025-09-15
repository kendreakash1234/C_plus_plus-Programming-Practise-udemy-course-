#include <iostream>

using namespace std;

int main()
{
    int num;
    cout<<"Enter the number"<<endl;
    cin>>num;
    int sum=0;
    for(int i=1;i<num;i++)
    {
        sum=sum+i;
    }
    cout<<"Sum of first "<<num<<" natural numbers is "<<sum;
    return 0;
}

