#include<iostream>
#include<vector>
using namespace std;

int main(){
    cout<<"Range based for loop \nUsing array"<<endl;
    int arr[] {1,2,3,4,5,6};
    
    for(int i : arr)
        cout<<i<<" ";
    
    vector<int> num{1,2,3,4,5,6};
    for(auto i : num)
        cout<<i<<" ";
    
    cout<<"\n\nFor double in vector"<<endl;
    for(double d : {12.4,43.5,23.1,54.1})
        cout<<d<<" ";
        
    cout<<"\n\nFor String sdafghjmyujghfd"<<endl;
    for(char c : "sdafghjmyujghfd")
        cout<<c<<endl;
    return 0;
}