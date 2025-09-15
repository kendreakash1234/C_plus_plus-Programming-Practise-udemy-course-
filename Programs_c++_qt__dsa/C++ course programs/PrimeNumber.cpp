#include <iostream>

using namespace std;

int main()
{
    int num;
    cout<<"Enter the number"<<endl;
    cin>>num;
    int flag=0;
    cout<<"Factors of "<<num<<" are "<<endl;
    for(int i=2;i<num;i++)
    {
        if(num%i==0)
        {
            flag++;
            break;
        }
    }
    if(flag==0)
    {
        cout<<num<<" is prime number";
    }
    else
    {
        cout<<num<<" is not prime number";
    }
    return 0;
}

