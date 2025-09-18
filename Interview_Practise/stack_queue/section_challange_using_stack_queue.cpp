#include <iostream>
#include <vector>
#include <deque>
#include<stack>
#include<queue>
#include<string>
#include <iomanip>
#include<algorithm>
using namespace std;

bool isPalidrome(const string &str){
    int front = 0;
    int last = str.length()-1;
    while(front<=last){
        if(str[front]!=str[last])
        {
            return false;
        }
        front++;
        last--;
    }
    return true;
}

bool isPalindromUsingqeque_stack(const string &str){
    stack<char> s;
    queue<char> q;
    for(auto c : str)
        if(isalpha(c)){
            c=(std::toupper(c));
            q.push(c);
            s.push(c);
        }
    char c1{};
    char c2{};
    while(!q.empty()){
        c1 = q.front();
        q.pop();
        c2 = s.top();
        s.pop();
        if(c1!=c2)
            return false;
    }
    return true;
}

int main()
{
    string str = "asdsa";
    cout<<std::boolalpha;
    bool istrue = isPalidrome(str);
    if(istrue)
        cout<<str<<" is Palindrome"<<endl;
    else
        cout<<str<<" is not palindrome"<<endl;

    vector<string> str1{"a","aa","aaa","abba","ab","asdf","asdfdsa",
    "a toyota's a toyota"};
    for(const auto &a : str1)
        cout<<std::setw(8)<<std::left<<isPalindromUsingqeque_stack(a)<<a<<endl;
    return 0;
}
