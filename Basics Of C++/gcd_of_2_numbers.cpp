#include <iostream>
using namespace std;

// int GCD(int a,int b){
//     if(b==0)
//         return a;
//     else if(a>b)
//       return GCD(b,a-b);
//     else
//       return GCD(b,b-a);
// }

int GCD(int a, int b){
    if(b==0)
        return a;
    return GCD(b,a%b); 
}
int main()
{
    int choice{0};
    do{
        cout<<"Enter the number : ";
    int num1,num2;
    cin>>num1>>num2;
    
    cout<<"gcd of  "<<num1<<" and "
    <<num2<<" is "<<GCD(num1,num2)<<endl;
    cout<<"Enter choice to continue else 0 to exit"<<endl;
    cin>>choice;
    }while(choice!=0);
    return 0;
}