#include <iostream>
#include<map>
#include<set>
#include<vector>
#include <list>
using namespace std;

int main()
{
    vector<int> vec{5,2,6,4,5};
    auto it = vec.begin();
    cout<<"First "<<(*it)<<" ";
    it++;
    cout<<"second "<<(*it)<<" ";
    it++;
    cout<<"third "<<(*it)<<" ";
    it++;
    cout<<"fourth "<<(*it)<<" ";
    it++;
    cout<<"fifth "<<(*it)<<" "<<endl;
    it--;
    cout<<"fourth "<<(*it)<<" "<<endl;
    it-=3;
    cout<<"First "<<(*it)<<" "<<endl;
    cout<<"///////////using iterator while///////////"<<endl;
    vector<int>::iterator it1 = vec.begin();
    while(it1!=vec.end()){
        cout<<*it1<<" ";
        it1++;
    }

    cout<<"///////////using auto iterator for///////////"<<endl;

    for(auto it2 = vec.begin();it2!=vec.end();++it2){
        cout<<*it2<<" ";
    }

    cout<<"\n///////////using const iterator while///////////"<<endl;
    vector<int>::const_iterator it3 = vec.cbegin();
    while(it3!=vec.cend()){
        cout<<*it3<<" ";
        ++it3;
    }
    cout<<"\n///////////using reverse iterator while///////////"<<endl;
    vector<int>::reverse_iterator it4 = vec.rbegin();
    while(it4!=vec.rend()){
        cout<<*it4<<" ";
        ++it4;
    }
    cout<<"\n///////////using const reverse iterator while////////"<<endl;
    auto it5 = vec.crbegin();
    while(it5!=vec.crend()){
        cout<<*it5<<" ";
        it5++;
    }
    return 0;
}