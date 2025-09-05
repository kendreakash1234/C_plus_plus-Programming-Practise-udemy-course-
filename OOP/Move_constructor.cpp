#include <iostream>
#include <vector>
using namespace std;

class Move{
    int *data;
    public:
    Move(int d);
    Move(const Move &source);
    Move(Move &&source)noexcept;
    int get_value();
    ~Move();
};

Move::Move(int d){
    cout<<"parameterized constructor"<<endl;
    data = new int;
    *data = d;
}
Move::Move(const Move &source):Move{*source.data}{
    cout<<"Deep copy"<<endl;
}

Move::~Move(){
    if(data == nullptr)
        cout<<"Destructor nullptr"<<endl;
    else
        cout<<"Destructor for "<<*data<<endl;
    delete data;
}

Move::Move(Move &&source) noexcept
{
    cout<<"Move constructor"<<endl;
    data = source.data;
    source.data = nullptr;
}

int Move::get_value(){
    return *data;
}


int main()
{
    vector<Move> m;
    m.push_back(Move{10});
    m.push_back(Move{20});
    m.push_back(Move{30});
    m.push_back(Move{40});

    return 0;
}