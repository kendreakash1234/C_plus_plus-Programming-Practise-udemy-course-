#include <iostream>
#include<array>
using namespace std;

void display(array<int, 5> &arr){
    for(auto x : arr)
        cout<<x<<" ";
    cout<<endl;
}
int main()
{
    array<int, 5> arr1{1,2,3,4,5};
    array<int, 5> arr2;
    cout<<"original arrays"<<endl;
    display(arr1);
    display(arr2);
    cout<<"size of arrays"<<endl;
    cout<<"size of array 1 = "<<arr1.size()<<endl;
    cout<<"size of array 2 = "<<arr2.size()<<endl;
    
    arr1.at(0) = 100;
    arr1[1] = 2000;
    display(arr1);
    cout<<"front and back of array"<<endl;
    cout<<"front of arr1 "<<arr1.front()<<endl;
    cout<<"back of arr1 "<<arr1.back()<<endl;
    
    arr2.fill(4);
    display(arr2);
    cout<<"After swapping"<<endl;
    arr1.swap(arr2);
    display(arr1);
    display(arr2);
    
    int *ptr = arr2.data();
    cout<<"Address of arr2 "<<ptr<<endl;
    cout<<"After sorting"<<endl;

    cout<<"minimum element in array "<<min_elelemt(arr2.begin(), arr2.end());
    
    return 0;
}