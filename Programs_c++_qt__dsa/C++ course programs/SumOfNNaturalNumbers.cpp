//Sum of N natural numbers =N*(N+1)/2
#include <iostream>

using namespace std;

int main()
{
    int N,sum;
    cout<<"Enter the number till you want sum"<<endl;
    cin>>N;
    sum=N*(N+1)/2;
    cout<<"Sum of first "<<N<<" number is : "<<sum;
    return 0;
}
