#include <iostream>
#include<fstream>
#include<string>

using namespace std;

class Item
{
public:
    string name;
    int price;
    int quantity;

    friend ofstream & operator<<(ofstream &ofs,Item &i);
    friend ifstream & operator<<(ifstream &ifs,Item &i);
};

ofstream & operator<<(ofstream &ofs,Item &i)
{
    ofs<<i.name<<endl;
    ofs<<i.price<<endl;
    ofs<<i.quantity<<endl;
    return ofs;
}
ifstream & operator>>(ifstream &ifs,Item &i)
{
    ifs>>i.name>>i.price>>i.quantity;
    return ifs;
}

int main()
{
    Item i;
//    ofstream ofs("abc.txt",ios::trunc);
//    i.name="pen";
//    i.price=10;
//    i.quantity=100;
//    ofs<<i;
//    cout<<"Data stored in file"<<endl;

    ifstream ifs;
    ifs.open("abc.txt");
    if(ifs)
    {
        ifs>>i;
    }
    cout<<i.name<<" "<<i.price<<" "<<i.quantity<<endl;
    return 0;
}

