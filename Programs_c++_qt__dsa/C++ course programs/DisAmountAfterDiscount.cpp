#include<iostream>
using namespace std;

int main()
{
    int amount;
    cout<<"enter amount"<<endl;
    cin>>amount;
    float disAmount;
    if(amount>=5000)
    {
        disAmount=amount-(20*amount/100.0);
        cout<<disAmount;
    }
    else if(amount>=2000 && amount<5000)
    {
        disAmount=amount-(10*amount/100.0);
        cout<<disAmount;
    }
    else
    {
        disAmount=amount-(5*amount/100.0);
        cout<<disAmount;

    }
}