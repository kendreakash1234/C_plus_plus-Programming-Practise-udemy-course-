#include <iostream>
#include<vector>

using namespace std;



int main()
{
    int num{100};
    int &ref = num;
   
    num = 40;
    
    cout<<"ref = "<<(ref)<<endl;
    cout<<"num = "<<num<<endl;
    
    ref = 50;
    
    cout<<"ref = "<<(ref)<<endl;
    cout<<"num = "<<num<<endl;
    
    vector<string> v{"akash", "kendre"};
    for(auto x:v){
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<"normal variable"<<endl;
    for(auto x:v){
        x = "hello";
    }
    
    for(auto x:v){
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<"Reference variable"<<endl;
    for(auto &x:v){
        x = "hello";
    }
    
    for(auto x:v){
        cout<<x<<" ";
    }
    
    return 0;
}



