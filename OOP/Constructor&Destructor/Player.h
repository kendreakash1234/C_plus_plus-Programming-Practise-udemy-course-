#include <iostream>
#include <string>
using namespace std;

class Player{
    
    string name;
    int age;
    
    public:
    Player();
    Player(string s);
    Player(string s, int a);
    
    ~Player();
};