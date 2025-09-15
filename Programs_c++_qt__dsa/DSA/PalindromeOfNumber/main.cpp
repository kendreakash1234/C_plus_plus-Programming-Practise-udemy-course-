#include <iostream>

using namespace std;

bool Palindrome(int num)
{
    int temp=num;
    int rem=0,res=0;
     while(temp>0)
     {
         rem=temp%10;
         res=res*10+rem;
         temp/=10;
     }
     return res==num;
}

int main()
{
    cout << "Enter the number" << endl;
    int num;
    cin>>num;
    if(Palindrome(num))
        cout<<num<<" is palindrome number"<<endl;
    else
        cout<<num<<" is not palindrome number"<<endl;
    return 0;
}



