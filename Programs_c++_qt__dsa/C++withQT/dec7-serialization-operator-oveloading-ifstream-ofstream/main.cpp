#include <iostream>
#include<fstream>
#include<string>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    string branch;

    friend ofstream & operator<<(ofstream &ofs,Student &s);
    friend ifstream & operator>>(ifstream &ifs,Student &s);
};

ofstream & operator<<(ofstream &ofs,Student &s)
{
    ofs<<s.name;
    ofs<<s.roll;
    ofs<<s.branch;
    return ofs;
}

ifstream & operator>>(ifstream &ifs,Student &s)
{
    ifs>>s.name>>s.roll>>s.branch;

    return ifs;
}
int main()
{

//    ofstream ofs("my.txt",ios::trunc);
//    Student s1;
//    s1.name="Akash";
//    s1.roll=100;
//    s1.branch="ENTC";
//    ofs<<s1;
    ifstream ifs;
    ifs.open("my.txt");
    if(ifs)
        cout<<"file is open"<<endl;
    Student s2;
    ifs>>s2;
    cout<<"String "<<s2.name<<" "<<s2.roll<<" "<<s2.branch;
    return 0;
}

