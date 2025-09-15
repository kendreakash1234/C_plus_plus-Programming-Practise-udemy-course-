#include <iostream>
using namespace std;

class Player{
    string name;
    int age;
    int xp;
    friend void display(Player &p);

    public:
    Player(string name, int age, int xp)
    {
        this->name = name;
        this->age = age;
        this->xp = xp;
    }
    
};

void display(Player &p)
{
    cout<<p.name<<endl;
}
int main()
{
    Player p("Akash",28,90);
    
    display(p);
    
    return 0;
}