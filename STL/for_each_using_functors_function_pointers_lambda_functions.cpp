#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct square_functor{
    void operator()(int x){
        cout<<x*x<<endl;
    }
    void add(int x){
        cout<<x+x<<endl;
    }
};

void square_functor1(int x){
    cout<<x*x<<endl;
}

int main()
{
    vector<int> v{1,2,3,4,5};
    square_functor square;
    cout<<"Using functor(function object)"<<endl;
    for_each(v.begin(), v.end(),square);
    cout<<"Sum = ";
    square.add(5);

    cout<<"Using function pointer"<<endl;
    for_each(v.begin(), v.end(),square_functor1);

    cout<<"Using lambda "<<endl;
    for_each(v.begin(), v.end(),[](int x){cout<<x*x<<endl;});

    return 0;
}
