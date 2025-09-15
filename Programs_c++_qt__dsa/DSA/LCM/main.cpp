
#include <iostream>

using namespace std;

int MaxOfTwoNumbers(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}

int LCMOfTwoNumbers(int x,int y)
{
    int maxNum=MaxOfTwoNumbers( x,y);
    while(true)
    {
        if(maxNum%x==0 && maxNum%y==0)
        {
            break;
        }
        maxNum++;
    }
    return maxNum;

}

int gcd(int a,int b)
{
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}

int LCMOfTwoNumbersUsingGCD(int m,int n)
{
    return (m*n)/gcd(m,n);      //(a*b)=gcd(a,b)*lcm(a,b)
}

int main()
{
    int num1,num2;
    cout<<"Enter two numbers"<<endl;
    cin>>num1>>num2;
    cout<<"LCM of "<<num1<<" and "<<num2<<" is "<<LCMOfTwoNumbers(num1,num2)<<endl;

    cout<<"LCM of "<<num1<<" and "<<num2<<" is "<<LCMOfTwoNumbersUsingGCD(num1,num2)<<endl;

    return 0;
}

