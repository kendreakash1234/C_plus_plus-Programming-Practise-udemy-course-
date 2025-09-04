#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Player
{
    public:
    //attributes
    string name{"Player"};
    int health{0};
    int xp{100};
    
    //method
    void talk(string msg){cout<<name<<" says "<<msg<<endl;}
    void is_dead();
};



int main()
{
    Player buvi;
    buvi.name = "Bhuvneshwar";
    buvi.health = 40;
    buvi.xp = 5;
    cout<<"Using dot(.) operator"<<endl;
    cout<<buvi.name<<endl;
    cout<<buvi.health<<endl;
    cout<<buvi.xp<<endl;
    buvi.talk("Hi there");
    
    Player *yuvi = new Player();
    (*yuvi).name = "Yuvraj";
    (*yuvi).health = 40;
    (*yuvi).xp = 5;

    cout<<"Using dereference (*)"<<endl;
    cout<<(*yuvi).name<<endl;
    cout<<(*yuvi).health<<endl;
    cout<<(*yuvi).xp<<endl;
    (*yuvi).talk("Hi there");

    Player *pant = new Player();
    pant->name = "Rishabh";
    pant->health = 40;
    pant->xp = 5;

    cout<<"Using arrow(->) operator"<<endl;
    cout<<pant->name<<endl;
    cout<<pant->health<<endl;
    cout<<pant->xp<<endl;    
    yuvi->talk("Hi there");

    delete pant;

    return 0;
}



