#include <iostream>

using namespace std;

void find(int num)
{
    switch(num)
    {
        case 1:
            cout<<"one ";
            break;
         case 2:
            cout<<"two ";
            break;
         case 3:
            cout<<"three ";
            break;
         case 4:
            cout<<"four ";
            break;
         case 5:
            cout<<"five ";
            break;
         case 6:
            cout<<"six ";
            break;
         case 7:
            cout<<"seven ";
            break;
         case 8:
            cout<<"eight ";
            break;   
         case 9:
            cout<<"nine ";
            break;
         case 0:
            cout<<"zero ";
            break;
    }
}
int main()
{
    int num;
    cout<<"Enter the number"<<endl;
    cin>>num;
    int temp=num;
    int sum=0,rem;
    while(temp>0)
    {
        rem=temp%10;
        sum=sum*10+rem;
        temp/=10;
    }
    cout<<"Alphabatically "<<num<<" is ";
    while(sum>0)
    {
        rem=sum%10;
        find(rem);
        sum/=10;
    }
    
    return 0;
}

