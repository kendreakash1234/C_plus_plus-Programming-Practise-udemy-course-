#include <iostream>
using namespace std;
int main()
{
    int choice{0};
    do{
        cout<<"Enter the number : ";
    int num,temp,fact=1;
    cin>>num;
    temp = num;
    while(num){
        fact*=num;
        num--;
    }
    cout<<"Factorial of "<<temp<<" is "<<fact<<endl;
    cout<<"Enter choice to continue else 0 to exit"<<endl;
    cin>>choice;
    }while(choice!=0);
    return 0;
}