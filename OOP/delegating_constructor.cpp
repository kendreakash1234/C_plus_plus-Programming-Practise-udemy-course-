#include <iostream>
using namespace std;

class Player{
    string name;
    int age;
    
    public:
    Player(string s, int a):name{s},age{a}{
        
    }
    Player(string s):Player{s,0}{
        
    }
    Player():Player{"Name", 0}{
        
    }
    
    
    
    void display(){
        cout<<name<<" is "<<age<<" years old"<<endl;
    }
};

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