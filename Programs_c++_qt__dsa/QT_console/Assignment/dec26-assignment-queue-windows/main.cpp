#include <iostream>
#include <queue>

using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    queue<int> q;
    q.push(4);
    q.push(7);
    q.push(1);
    q.pop();
    q.pop();
    q.push(0);
    q.push(1);
    q.pop();
    q.push(5);
    q.push(2);
    q.push(8);

    for(int i=q.front();i!=q.back();i++)
    {
        cout<<i<<endl;
    }
//    while(!q.empty())
//    {
//        cout<<q.front()<<endl;
//        q.pop();
//    }

    cout<<"First element is "<<q.front()<<endl;
    cout<<"Last element is "<<q.back()<<endl;
    cout<<"Size of queue is "<<q.size()<<endl;
    return 0;
}

