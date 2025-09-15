#include <iostream>

using namespace std;

int CountDigits(int num)
{
    int count=0;
     while(num>0)
     {
         num/=10;
         count++;
     }
     return count;
}

int main()
{
    cout << "Enter the number" << endl;
    int num;
    cin>>num;
    cout<<"The number of digits in "<<num<<" is "<<CountDigits(num)<<endl;
    return 0;
}

