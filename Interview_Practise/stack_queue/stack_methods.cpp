#include<iostream>
#include<stack>
using namespace std;


template <typename T>
void display(stack<T> s){
    cout<<"[ ";
    while(!s.empty())
    {
        T elem = s.top();
        s.pop();
        cout<<elem<<" ";
    }
    cout<<"]"<<endl;
}

int main()
{
    stack<int> s;
    cout<<"After push operation"<<endl;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    display(s);

    s.push(50);
    s.push(60);
    s.push(70);

    display(s);
    cout<<"Top of the element is "<<s.top()<<endl;

    if(s.empty())
        cout<<"Stack is empty"<<endl;
    else
        cout<<"Stack is not empty"<<endl;
    cout<<"After pop operation"<<endl;
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    display(s);

    cout<<"size of stack is "<<s.size()<<endl;

    return 0;
}
