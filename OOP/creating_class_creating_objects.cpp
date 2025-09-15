#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Player
{
    //attributes
    string name{"Player"};
    int health{0};
    int xp{100};
    
    //method
    void talk(string);
    void is_dead();
};

class Account
{
    // members
    string name{"Account"};
    double balance{1000};
    
    // methods
    bool deposit(double);
    bool withdraw(double);
};

int main()
{
    Player kohli;
    Player rohit;
    
    Player playres[]{kohli, rohit};
    vector<Player> player_vec{kohli};
    player_vec.push_back(rohit);
    
    Player *dhoni{nullptr};
    dhoni = new Player();
    
    delete dhoni;

    return 0;
}



