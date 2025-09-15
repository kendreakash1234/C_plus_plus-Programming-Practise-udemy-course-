#include <iostream>
#include<vector>
#include<list>

using namespace std;

int main()
{
    list<int> vector1 = {1, 2, 3, 4, 5};
    vector1.push_back(40);
    vector1.push_back(50);
    list<int>::iterator itr;
    for(itr=vector1.begin();itr!=vector1.end();itr++)
    {
        cout<<"Value is "<<*itr;
    }
    return 0;
}

