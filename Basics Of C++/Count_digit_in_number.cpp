#include <iostream>
using namespace std;
int main()
{
    int choice{0};
    do{
        cout<<"Enter the number : ";
    int num,temp;
    cin>>num;
    int count {0};
    temp = num;
    while(num>0){
        count++;
        num/=10;
    }
    cout<<temp<<" contains "<<count<<" digits"<<endl;
    cout<<"Enter number to continue else 0 to exit"<<endl;
    cin>>choice;
    }while(choice!=0);
    return 0;
}