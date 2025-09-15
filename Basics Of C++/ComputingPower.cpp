#include<iostream>
using namespace std;

int ComputingPower(int n1,int n2){
    int res = 1;
    for(int i=1;i<=n2;i++){
        res = res*n1;
    }
    return res;
}

int main()
{
    int num1{0},num2{0};
    cout<<"Enter the number : ";
    cin>>num1>>num2;
    cout<<num1<<" raise to "<<num2<<" = "
    <<ComputingPower(num1,num2)<<endl;
    return 0;
}