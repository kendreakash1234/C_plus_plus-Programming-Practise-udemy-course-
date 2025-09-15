#include <iostream>

using namespace std;

bool check(int n,int k)
{
    bool res;
    int x=1;
    for(int i=0;i<(k-1);i++)
    {
        x=x*2;
        if((n&x)!=0)
        {
//            cout<<"Yes"<<endl;
            res = true;
        }
        else
        {
//            cout<<"NO"<<endl;
            res = false;
        }
    }
    return res;
}

void usingLeftShift(int n,int k)
{
    int x=(1<<(k-1));
    if((n&x)!=0)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
}

int main()
{
    cout << "Enter the number and bit" << endl;
    int num,bit;
    cin>>num>>bit;
    if(check(num,bit))
        cout<<bit<<"th bit of "<<num<<" is SET"<<endl;
    else
        cout<<bit<<"th bit of "<<num<<" is not SET"<<endl;
    usingLeftShift(num,bit);
    return 0;
}

