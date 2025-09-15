#include <iostream>
#include <vector>
using namespace std;

template <typename T1, typename T2>
class Pair{
    T1 first;
    T2 second;
     public:
     Pair(T1 f, T2 s):first{f}, second{s}{
        cout<<first<<" "<<second<<endl;
     }
     T1 get_first(){
         return first;
     }
     
     T2 get_second(){
         return second;
     }
};

int main()
{
    Pair<int,double> p1{1,2.3};
    Pair<int,string> p2{1,"akash"};
    Pair<string,double> p3{"kendre",2.3};
    
    std::vector<Pair<string,double>> vec;
    vec.push_back(p3);

    for(auto c : vec){
        cout<<c.get_first()<<endl;
        cout<<c.get_second()<<endl;
    }
    
    return 0;
}