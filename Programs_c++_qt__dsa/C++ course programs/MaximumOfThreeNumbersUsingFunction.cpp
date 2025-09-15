#include <iostream>

using namespace std;

int maxOfThreeNumbers(int x, int y,int z);

int main()
{
    int a,b,c;
    cout<<"Enter value of a,b and c"<<endl;
    cin>>a>>b>>c;
    c=maxOfThreeNumbers(a,b,c);
    cout<<"maximum of three numbers is  = "<<c;
    return 0;
}

int maxOfThreeNumbers(int x,int y,int z)
{
    if(x>y&&x>z)
    {
        return x;
    }
    else
    {
        if(y>z)
        {
            return y;
        }
        else
        {
            return z;
        }
    }
}