#include <iostream>

using namespace std;

int ComputePower(int x,int y)
{
    int result=1;
    for(int i=1;i<=y;i++)
    {
        result=result*x;
    }
    return result;
}

int ComputePower1(int x,int y)
{
    if(y==0)
        return 1;
    else if(y%2==0)
        return ComputePower1(x,y/2)*ComputePower1(x,y/2);
    else
        return ComputePower1(x,(y-1))*x;
}

int main()
{
    int number,power;
    cout << "Enter two numbers" << endl;
    cin>>number>>power;

    cout<<number<<" to the power "<<power<<" is "<<ComputePower(number,power)<<endl;
    cout<<number<<" to the power "<<power<<" is "<<ComputePower1(number,power)<<endl;

    return 0;
}

