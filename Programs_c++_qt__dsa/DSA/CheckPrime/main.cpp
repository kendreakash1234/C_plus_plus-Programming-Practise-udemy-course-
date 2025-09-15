#include <iostream>

using namespace std;

bool checkPrime(int x)
{
    if(x==1)
        return false;
    for(int i=2;i<=x/2;i++)
    {
        if(x%i==0)
        {
            return false;
        }

    }
    return true;
}

bool checkPrime1(int a)
{
    if(a==1)
        return false;
    for(int i=2;i*i<a;i++)
    {
        if(a%i==0)
            return false;
    }
    return true;
}

bool checkPrime2(int z)
{
    if(z==1)
        return false;
    if(z==2||z==3)
        return true;
    if(z%2==0||z%3==0)
        return false;
    for(int i=5;i*i<z;i=i+6)
        if(z%i==0||z%(i+2)==0)
            return false;
    return true;
}

int main()
{
    cout << "Enter the number" << endl;
    int num;
    cin>>num;
    if(checkPrime(num))
        cout<<num<<" is Prime number"<<endl;
    else
        cout<<num<<" is Not Prime number"<<endl;


    if(checkPrime1(num))
        cout<<num<<" is Prime number"<<endl;
    else
        cout<<num<<" is Not Prime number"<<endl;


    if(checkPrime2(num))
        cout<<num<<" is Prime number"<<endl;
    else
        cout<<num<<" is Not Prime number"<<endl;
    return 0;
}

