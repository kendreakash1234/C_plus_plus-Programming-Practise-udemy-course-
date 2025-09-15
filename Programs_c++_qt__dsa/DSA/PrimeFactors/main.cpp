#include <iostream>

using namespace std;

bool prime(int x)

{
    if(x==1)
        return false;
    if(x==2||x==3)
        return true;
    if(x%2==0||x%3==0)
        return false;
    for(int i=5;i*i<=x;i=i+6)
        if(x%i==0||x%(i+2)==0)
            return false;
    return true;
}

void PrimeFactors(int n)
{
    for(int i=2;i<n;i++)
    {
        if(prime(i))
        {
            int x=i;
            while(n%x==0)
            {
                cout<<i<<endl;
                x=x*i;
            }
        }
    }
}

void PrimeFactors1(int n)
{
    if(n<=1) return;
    for(int i=2;i*i<=n;i++)
    {
        while(n%i==0)
        {
            cout<<i<<endl;
            n=n/i;
        }
    }
    if(n>1)
        cout<<n<<endl;
}

void PrimeFactors2(int n)
{
    if(n<=1)
        return;
    while(n%2==0)
    {
        cout<<2<<endl;
        n=n/2;
    }
    while(n%3==0)
    {
        cout<<3<<endl;
        n=n/3;
    }
    for(int i=5;i*i<=n;i=i+6)
    {
        while(n%i==0)
        {
            cout<<i<<endl;
            n=n/i;
        }
        while(n%(i+2)==0)
        {
            cout<<(i+2)<<endl;
            n=n/(i+2);
        }
    }
    if(n>3)
        cout<<n<<endl;

}

int main()
{
    cout << "Enter number" << endl;
    int num;
    cin>>num;

    PrimeFactors(num);

    PrimeFactors1(num);

    PrimeFactors2(num);
    return 0;
}

