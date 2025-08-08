#include <iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the number of elements : ";
    cin>>num;
    int arr[num];
    cout<<"Enter element in array : "<<endl;
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    bool isSorted = true;
    
    for(int i=0;i<num-1;i++){
        if(arr[i+1]<arr[i]){
            isSorted = false;
            break;
        }
    }
    
    int low=0;
    bool isPresent = false;
    int high=num-1;
    int findNum;
    if(isSorted){
        cout<<"Enter the number to find in array : ";
        cin>>findNum;
    }
    int i=0;
    while(low<=high && isSorted){
        int mid  = (low+high)/2;
        if(arr[mid] == findNum){
            i = mid;
            isPresent = true;
            break;
        }else if(arr[mid]<num){
            low = mid+1;
        }else{
            high = mid-1;
        }
    }
    
    if(!isSorted)
        cout<<"Array is not Sorted"<<endl;
    else if(isPresent)
        cout<<findNum<<" is present in array at "<<i<<" position"<<endl;
    else
        cout<<findNum<<" is not present in array"<<endl;
        
    return 0;
}
