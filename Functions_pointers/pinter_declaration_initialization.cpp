#include <iostream>
using namespace std;

int main()
{
    int num{10};//variable declaration & initialization
    cout<<"Value of num "<<num<<endl;
    cout<<"Address of num "<<&num<<endl;
    cout<<"Size of num "<<sizeof(num)<<endl;
    
    int *ptr{};//pointer declaration & initialization to null
    cout<<"value of ptr "<<ptr<<endl;
    ptr=&num;
    cout<<"value of ptr "<<ptr<<endl;
    cout<<"address of ptr "<<&ptr<<endl;
    cout<<"Value at ptr "<<*ptr<<endl;//deferencing pointer
    cout<<"size of ptr "<<sizeof(ptr)<<endl;
    
    ptr = nullptr;
    cout<<"value of ptr "<<ptr<<endl;

    return 0;
}



