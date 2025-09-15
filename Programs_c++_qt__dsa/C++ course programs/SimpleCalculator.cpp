#include <iostream>

using namespace std;

int main()
{
    int num1,num2;
   char choice;
   cout<<"Enter your choice\n (add) + \t(sub) - \t(mul) * \t (div) /"<<endl;
   cin>>choice;
    cout<<"Enter 2 numbers"<<endl;
    cin>>num1>>num2;
   switch(choice)
   {
       case '+':
            cout<<"Addition is "<<num1+num2;
             break;
       case '-':
            cout<<"Substraction is "<<num1-num2;
             break;
       case '*':
            cout<<"Multiplication is "<<num1*num2;
             break;
       case '/':
            cout<<"Division is "<<num1/num2;
             break;
        default:
            cout<<"Enter valid choice";
   }
    return 0;
}