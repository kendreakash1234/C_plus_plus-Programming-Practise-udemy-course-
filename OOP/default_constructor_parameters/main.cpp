#include <iostream>
using namespace std;
#include "Player.h"


int main()
{
    Player p;
    p.display();
    Player p1("akash");
    p1.display();
    Player p2("akash",28);
    p2.display();
    
    Player *p3 = new Player("akash", 9);
    p3->display();
    
    delete p3;
    return 0;
}