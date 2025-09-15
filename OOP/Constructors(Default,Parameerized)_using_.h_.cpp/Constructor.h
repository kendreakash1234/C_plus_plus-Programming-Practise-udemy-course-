#include <iostream>
#include <string>
using namespace std;

class Player
{
    string name;
    int age;
    
    public:
    Player();
    Player(string s, int a);
    void set_name(string s);
    string get_name();
    void set_age(int a);
    int get_age();
    void display();
    ~Player();
};
