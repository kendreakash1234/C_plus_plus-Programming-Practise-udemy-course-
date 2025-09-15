#include <iostream>

using namespace std;

int main()
{
    int num;
    cout<<"Enter the number"<<endl;
    cin>>num;
    int temp=num;
    int rem,sum=0;
    while(temp>0)
    {
      rem=temp%10;
      sum=sum*10+rem;
      temp/=10;
    }
    if(num==sum)
    {
        cout<<num<<" is palindrome";
    }
    else
    {
        cout<<num<<" is not palindrome";
    }
    
    return 0;
} 