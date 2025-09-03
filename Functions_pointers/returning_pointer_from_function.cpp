#include <iostream>
#include<vector>

using namespace std;

int *create_arr(int size, int val)
{
    int *ptr = new int[size];
    
    for(int i=0;i<size;i++)
    {
        *(ptr+i) = val;
    }
    return ptr;
}

int main()
{
    int *arr;
    
    arr = create_arr(100,20);

    for(int i=0;i<100;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}



