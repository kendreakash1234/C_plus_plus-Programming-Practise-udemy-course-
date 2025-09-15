#include<iostream>
#include <vector>
using namespace std;

int main()
{
    int num{0};
    cout<<"Enter the number : ";
    cin>>num;
    int i;
    for(i=1;i*i<=num;i++){
        if(num%i==0){
            cout<<i<<endl;
        }
    }
    
    for(--i;i>=1;i--){
        if(num%i==0)    
            cout<<num/i<<endl;
    }
    return 0;
}