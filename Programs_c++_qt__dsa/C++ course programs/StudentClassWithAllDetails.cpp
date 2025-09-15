#include <iostream>
#include <string>
using namespace std;

class Student
{
    private:
    int Roll;
    string name;
    int phy,che,math;
    public:
    
    Student(string n,int r,int p,int c,int m)
    {
        name=n;
        Roll=r;
        phy=p;
        che=c;
        math=m;
    }
    void setName(string n)
    {
        name=n;
    }
    void setRoll(int r)
    {
        Roll = r;
    }
    void setPhy(int p)
    {
        phy=p;
    }
    void setChe(int c)
    {
        che=c;
    }
    void setmath(int m)
    {
        math=m;
    }
    string getName()
    {
        return name;
    }
    int getRoll()
    {
        return Roll;
    }
     int getPhy()
    {
        return phy;
    } int getChe()
    {
        return che;
    } int getMath()
    {
        return math;
    }
    int TotalMarks()
    {
        cout<<phy<<" "<<che<<" "<<math<<endl;
        return (phy+che+math);
    }
    char Grade(int total)
    {
        if(total>80)
        {
            return 'A';
        }
        else if(total>60)
        {
            return 'B';
        }
        else if(total>40)
        {
            return 'C';
        }
        else
        {
            return 'F';
        }
        
    }
    
};

int main()
{
    int Roll,phy,che,math;
    string name;
    cout<<"Enter name,roll number , marks of phy,che and math"<<endl;
    getline(cin,name);
    cin>>Roll>>phy>>che>>math;
    Student s(name,Roll,phy,che,math);
    int total=s.TotalMarks();
    char grade=s.Grade(total);
    cout<<"Name of Student : "<<s.getName()<<endl;
    cout<<"Roll no of student : "<<s.getRoll()<<endl;
    cout<<"Total marks of student :"<<total<<endl;
    cout<<"Grade of student : "<<grade<<endl;
    return 0;
}
