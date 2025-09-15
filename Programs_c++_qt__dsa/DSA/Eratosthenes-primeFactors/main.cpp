#include <iostream>
#include <vector>

using namespace std;

bool isPrime(int x)
{
    if(x==1)
        return false;
    if(x==2||x==3)
        return true;
    if(x%2==0||x%3==0)
        return false;
    for(int i=5;i*i<=x;i=i+6)
    {
        if(x%i==0||x%(i+2)==0)
            return false;
    }
    return true;
}

void Eratosthenes(int n)
{
    for(int i=2;i<=n;i++)
    {
        if(isPrime(i))
            cout<<i<<endl;
    }
}

void Seive(int a)
{
    vector <bool> Prime (4, true);

    for(int i=2;i*i<=a;i++)
    {
        if(Prime[i])
        {
            for(int j=2*i;j<=a;j=j+i)
                Prime[j]=false;
        }
    }
    for(int i=2;i<=a;i++)
    {
            if(Prime[i])
                cout<<i<<endl;
    }
    vector<bool>::iterator itr;
    for (itr = Prime.begin();itr < Prime.end();itr++)
        cout << *itr << " ";
}

int main()
{
    cout << "Enter the number" << endl;
    int num;
    cin>>num;
    Eratosthenes(num);

    Seive(num);
    return 0;
}
