#include <iostream>

using namespace std;

int minOfTwoNumbers(int x,int y)
{
    if(x<y)
        return x;
    else
        return y;
}

int gcdOfTwoNumbers(int a,int b)
{
    int min=minOfTwoNumbers(a,b);
    while(min>0)
    {
        if(a%min==0 && b%min==0)
        {
            break;
        }
        min--;
    }

    return min;
}

int gcdOfTwoNum(int m,int n)
{
    if(m==n)
        return m;
    else if(m>n)
        gcdOfTwoNum(n,m-n);
    else if(m<n)
        gcdOfTwoNum(n,m);
    else
        return 1;
}

int gcdOfTwoNumUsingEuclid(int p,int q)
{
    while(p!=q)
    {
        if(p>q)
            p=p-q;
        else
            q=q-p;
    }
    return p;
}

int gcdOfTwoNumoptimized(int i,int j)
{
    if(j==0)
        return i;
    else
        return gcdOfTwoNumoptimized(j,i%j);
}

int main()
{
    cout << "Enter two numbers" << endl;
    int num1,num2;
    cin>>num1>>num2;
    int gcd1=gcdOfTwoNumbers(num1,num2);
    cout<<"GCD of "<<num1<<" and "<<num2<<" using naive solution "<<gcd1<<endl;

    cout<<"GCD of "<<num1<<" AND "<<num2<<" using best solution "<<gcdOfTwoNum(num1,num2)<<endl;

    cout<<"GCD of "<<num1<<" AND "<<num2<<" using Euclid solution "<<gcdOfTwoNumUsingEuclid(num1,num2)<<endl;

    cout<<"GCD of "<<num1<<" AND "<<num2<<" using optimized solution "<<gcdOfTwoNumoptimized(num1,num2)<<endl;

    return 0;
}

