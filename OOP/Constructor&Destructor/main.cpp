#include <iostream>
#include "Player.h"

using namespace std;

int main()
{
    Player p1;
    Player p2("akash");
    Player p3("akash", 5);
    
    {
    Player p4;
    Player p5("akash");
    Player p6("akash", 5);
    }
    
    Player *p = new Player("Akash", 9);
    delete p;

    return 0;
}