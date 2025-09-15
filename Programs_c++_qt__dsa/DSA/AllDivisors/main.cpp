#include <iostream>

using namespace std;
void AllDivisors(int n)
{
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
            cout<<i<<endl;
    }
}

void AllDivisors1(int n)
{
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            cout<<i<<endl;
            if(i!=n/i)
                cout<<n/i<<endl;
        }
    }
}

void AllDivisors2(int n)
{
    int i;
    for(i=1;i*i<n;i++)
    {
        if(n%i==0)
        {
            cout<<i<<endl;
        }
    }
    for(;i>=1;i--)
    {
        if(n%i==0)
        {
            cout<<n/i<<endl;
        }
    }
}

int main()
{
    cout << "Enter the number" << endl;
    int num;
    cin>>num;

    AllDivisors(num);

    AllDivisors1(num);


    AllDivisors2(num);

    return 0;
}

