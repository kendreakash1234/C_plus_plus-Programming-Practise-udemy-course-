#include <iostream>
#include <vector>
using namespace std;

int LinearSearchUsingVector(vector<int> a, int num)
{
    int count = 0;
    bool isPresent = false;
    for(auto i : a){
        if(i == num)
        {
            isPresent = true;
            break;
        }
        else
            count++;
    }
    if(isPresent)
        return count;
    else
        return -1;
}

int LinearSearchUsingArray(int a[], int size, int num)
{
    int count = 0;
    bool isPresent = false;
    for(int i=0;i<size;i++){
        if(a[i] == num)
        {
            isPresent = true;
            break;
        }
        else
            count++;
    }
    if(isPresent)
        return count;
    else
        return -1;
}

int BinarySearchUsingArray(int a[], int size, int num){
    int low = 0;
    int high = size-1;
    while(low<=high){
        int mid = (low + high) / 2;
        if(a[mid] == num)
            return true;
        else if(num>a[mid])
            low = mid+1;
        else
            high = mid-1;
    }
    return false;
}

int main()
{
    int findNum = 5;
    int n = 7;
    int a[]={0,1,2,3,4,5,6};
    vector<int> arr;
    for (int i = 0; i < n; i++) {
        arr.push_back(i);
        a[i] = i;
    }

    for (int i : arr) {
        cout<<i<<" ";
    }

//    int result = LinearSearchUsingVector(arr,findNum);
//    if(result >=0)
//        cout<<"\nLinearSearchUsingVector Number is present at "<<result<< " position"<<endl;

//    int result1 = LinearSearchUsingArray(a,n,findNum);
//    if(result1 >=0)
//        cout<<"\nLinearSearchUsingArrayNumber is present at "<<result1<< " position"<<endl;
//    else
//        cout<<"LinearSearchUsingArray Number is not present in Array"<<endl;

    int result2 = BinarySearchUsingArray(a,n,findNum);
    if(result2)
        cout<<"\nBinarySearchUsingArray Number is present "<<endl;
    else
        cout<<"BinarySearchUsingArray Number is not present in Array"<<endl;

    return 0;
}
