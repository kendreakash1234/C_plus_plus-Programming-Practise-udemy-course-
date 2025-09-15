#include <iostream>
#include <vector>
using namespace std;

class Move{
    string name;
    int age;
    static int count;
    public:
    Move(string name, int age);
    string get_name() const;
    static int get_num_players();
    ~Move();
};

int Move::count = 0;

Move::Move(string name, int age):name{name}, age{age}{
    cout<<"parameterized constructor"<<endl;
    ++count;
}

int Move:: get_num_players(){
    return count;
}

string Move::get_name() const{
    return name;
}


Move::~Move(){
    --count;
    cout<<"Destructor"<<endl;
}

void display(){
    cout<<"Active players "<<Move::get_num_players()<<endl;;
}
int main()
{
    display();
     Move h("Akash", 8);
        display();


    return 0;
}