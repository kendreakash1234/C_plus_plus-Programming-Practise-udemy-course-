#include<iostream>
using namespace std;

bool PrimeNumber(int a){
   if(a<2)
        return false;
    if(a==2 || a==3)
        return true;
    if(a%2==0 || a%3==0)
        return false;
    for(int i=5;i*i<a;i+=6){
        if(a%i==0 || a%(i+2)==0)
            return false;
    }
    return true;
}

int main()
{
    int num{0};
    cout<<"Enter the number : ";
    cin>>num;
    
    if(PrimeNumber(num))
        cout<<num<<" is Prime nuumber"<<endl;
    else
        cout<<num<<" is Not a Prime nuumber"<<endl;
    
    return 0;
}