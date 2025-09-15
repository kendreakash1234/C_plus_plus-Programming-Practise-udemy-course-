#include <iostream>

using namespace std;

int Power(int x,int y)
{
    int res=1;
    while(y>0)
    {
        if(y%2!=0)
            res=res*x;
        x=x*x;
        y=y/2;
    }
    return res;
}

int main()
{
    cout << "Enter two numbers" << endl;
    int num,pow;
    cin>>num>>pow;

    cout<<Power(num,pow)<<endl;
    return 0;
}

