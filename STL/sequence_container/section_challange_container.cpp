#include <iostream>
#include <vector>
#include <deque>
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

bool isPalindromUsingDeque(const string &str){
    deque<char> v;
    
    for(auto &c : str)
        if(isalpha(c))
            v.push_back(std::toupper(c));
    char x,y;
    while(v.size()>1){
        x = v.front();
        y = v.back();
        if(x == y){
            v.pop_front();
            v.pop_back();
        }else{
            return false;
        }
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
        cout<<std::setw(8)<<std::left<<isPalindromUsingDeque(a)<<a<<endl;
    return 0;
}