#include<iostream>
using namespace std;
#include "Constructor.h"
int main()
{
    //Default constructor
    Player p;
    p.display();
    p.set_age(28);
    p.set_name("Akash");
    p.display();
    
    //Parameterized constructor
    Player p2("kendre",29);
    p2.display();
    
    //Parameterized constructor using pointer
    Player *p3 = new Player("datta",60);
    p3->display();
    
    delete p3;
    return 0;
}