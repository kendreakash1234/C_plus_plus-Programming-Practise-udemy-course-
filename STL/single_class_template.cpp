
#include <iostream>
using namespace std;
template <typename T>
class Item{
    string name;
    T age;
    public:
    Item(string a, T b):name{a}, age{b}
    {
        cout<<name<<" is "<<age<<" years old"<<endl;
    }
    
};

int main()
{
    Item<int> item{"akash",5};
    Item<double> item1{"akash",5.4};
    Item<string> item2{"akash","5"};

    return 0;
}