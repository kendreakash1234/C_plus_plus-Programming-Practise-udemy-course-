#include <iostream>
using namespace std;
int main()
{
    int choice{0};
    do{
        cout<<"Enter the number : ";
    int num,temp;
    cin>>num;
    temp = num;
    int sum{0};
    while(num>0){
        sum=10*sum+(num%10);
        num/=10;
    }
    if(sum == temp)
        cout<<temp<<" is Palindrome number"<<endl;
    else
        cout<<temp<<" is not Palindrome"<<endl;
    cout<<"Enter choice to continue else 0 to exit"<<endl;
    cin>>choice;
    }while(choice!=0);
    return 0;
}