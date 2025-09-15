#include <iostream>
using namespace std;

template <typename T>
T min1(T a, T b){
    return (a<b)?a:b;
}

template <typename T1, typename T2>
void func(T1 a, T2 b){
    cout<<a<<" "<<b<<endl;
}

struct Person{
    string name;
    int age;
    bool operator<(const Person &rhs) const{
        return this->age < rhs.age;
    }
};

ostream &operator<<(ostream &os, const Person &obj2){
    os<<obj2.name<<" "<<obj2.age;
    return os;
}

template <typename T>
void myswap(T &a, T &b){
    T temp = a;
    a = b; 
    b = temp;
}

int main()
{
  cout<<min1(3,4)<<endl;
  cout<<min1<double>(3.1,4.4)<<endl;
  cout<<min1<char>('c','v')<<endl;
   
   func<int,double>(1,2.3);
   func<int,double>(2.4,'c');
   func<int,double>('c',3);
   
   Person p1{"akash", 28};
   Person p2{"kendre", 12};
   Person p3 = min(p1,p2);
   cout<<p3.name<<" is younger"<<endl;
   
   func(p1,p2);
   
    int a{10}, b{20};
    std::cout << "a = "<<a<<" b = "<<b << std::endl;
    swap(a,b);
    std::cout << "a = "<<a<<" b = "<<b << std::endl;

    return 0;
}