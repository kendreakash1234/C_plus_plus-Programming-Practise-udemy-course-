#include <iostream>
using namespace std;

void swap(int *p, int *q)
{
    int val = *p;
    *p = *q;
    *q = val;
}

int main()
{
    int num1{4}, num2{5};
    cout<<"Before num1 = "<<num1<<" num2 = "<<num2<<endl;
    
    swap(&num1, &num2);
    
    cout<<"After num1 = "<<num1<<" num2 = "<<num2<<endl;

    
    return 0;
}



