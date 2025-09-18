#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct square_struct
{
    void operator()(int num)
    {
        cout<<num*num<<" ";
    }
};

template <typename T>
struct Displayer
{
    void operator()(const T &x)
    {

        cout<<x<<" ";
    }
};

class Multiplier
{
    int num;
public:
    Multiplier(int n):num{n}{
    }
    int operator()(int x)
    {
        return num*x;
    }
};
int main()
{

    cout<<"Using functors(Function objects)"<<endl;
    square_struct square;
    square(5);
    cout<<endl;
    vector<int> v{1,2,3,4,5,6,7,8,9};
    for_each(v.begin(), v.end(),square);
    cout<<endl;

    Displayer<int> d1;
    Displayer<string> d2;
    d1(100);
    d2("Akash");
    cout<<endl;
    vector<int> v1{1,2,3,4,5,6,7,8};
    vector<string> v2{"akash","nishant","prajwal","hemant","kartik"};
    for_each(v1.begin(),v1.end(),Displayer<int>());
    //for_each(v1.begin(),v1.end(),d1);//same as above
    cout<<endl;
    for_each(v2.begin(),v2.end(),d2);
    //for_each(v2.begin(),v2.end(),Displayer<string>());//same as above
    cout<<endl;

    cout<<"Using Lambda"<<endl;
    for_each(v1.begin(),v1.end(),[](int x){cout<<x*x<<" ";});
    cout<<endl;
    for_each(v2.begin(),v2.end(),[](string x){cout<<x<<" ";});
    cout<<endl;
    vector<int> vec{1,2,3,4};
    Multiplier mult(10);
    transform(vec.begin(),vec.end(),vec.begin(),mult);
    for_each(vec.begin(),vec.end(),d1);
    cout<<endl;
    transform(vec.begin(),vec.end(),vec.begin(),[](int x){return x*100;});
    for_each(vec.begin(),vec.end(),d1);


   return 0;
}
