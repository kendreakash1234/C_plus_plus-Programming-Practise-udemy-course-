
#include<iostream>
#include<queue>
using namespace std;


template <typename T>
void display(queue<T> s){
    cout<<"[ ";
    while(!s.empty())
    {
        T elem = s.front();
        s.pop();
        cout<<elem<<" ";
    }
    cout<<"]"<<endl;
}

int main()
{
    queue<int> s;
    cout<<"After push operation"<<endl;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    display(s);
    cout<<"front of the element is "<<s.front()<<endl;
    cout<<"back of the element is "<<s.back()<<endl;

    s.push(50);
    s.push(60);
    s.push(70);

    display(s);
    cout<<"front of the element is "<<s.front()<<endl;
    cout<<"back of the element is "<<s.back()<<endl;

    if(s.empty())
        cout<<"Queue is empty"<<endl;
    else
        cout<<"Queue is not empty"<<endl;
    cout<<"After pop operation"<<endl;
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    display(s);
    cout<<"front of the element is "<<s.front()<<endl;
    cout<<"back of the element is "<<s.back()<<endl;

    cout<<"size of queue is "<<s.size()<<endl;

    return 0;
}
