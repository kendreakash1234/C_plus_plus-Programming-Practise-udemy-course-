	#include <iostream>

using namespace std;

int main()
{
    int num;
    cout<<"Enter the number"<<endl;
    cin>>num;
    int sum=0,rem;
    while(num>0)
    {
        rem=num%10;
        cout<<rem<<endl;;
        num/=10;
    }
    
    return 0;
}

