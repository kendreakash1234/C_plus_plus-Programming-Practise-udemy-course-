#include <iostream>
#include<vector>
using namespace std;

int main()
{
    int *ptr{nullptr};
    ptr = new int;
    cout<<ptr<<endl;
    delete ptr;
    
    size_t size{};
    cout<<"Enter the size ";
    cin>>size;
    double *ptr_array{nullptr};
    ptr_array = new double[size];
    cout<<ptr_array;
    
    delete [] ptr_array;
    
    return 0;
}



