#include <iostream>
using namespace std;

int main()
{
    int day;
    cout<<"Switch case statement\n\nEnter the day : ";
    cin>>day;
    switch(day){
        case 0:
            cout<<"Sunday";
            break;
        case 1:
            cout<<"Monday";
            break;
        case 2:
            cout<<"Tuesday";
            break;
        case 3:
            cout<<"Wednesday";
            break;
        case 4:
            cout<<"Thursday";
            break;
        case 5:
            cout<<"Friday";
            break;
        case 6:
            cout<<"Saturday";
            break;
        default:
            cout<<"Error - illegal day code";
    }

    //Conditional operator
    cout<<"\nConditional Operator\n\n";
    int num1,num2;
    cout<<"Enter the numbers : ";
    cin>>num1>>num2;
    
    (num1>num2)?cout<<num1<<" is greater than "
    <<num2:cout<<num2<<" is greater than "<<num1<<endl;
    
    cout<<"For loop\n\n";
    int n;
    cout<<"Enter the number of times foll loop run :";
    cin>>n;
    for(int i= 0;i<n;i++){
        cout<<i<<" time"<<endl;
    }
    
    
    return 0;
}