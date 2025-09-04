#include<iostream>
using namespace std;

class Player{
    string name;
    int age;
    
    public:
    Player(string s="None",int age=0);
    
    void display();
};