#include <iostream>
#include<string>
using namespace std;
class Employee
{
private:
    int id;
    string name;
public:
    Employee(int id,string name)
    {
        this->id=id;
        this->name=name;
    }
    void setId(int id)
    {
        this->id=id;
    }
    void setName(string name)
    {
        this->name=name;
    }
    int getId()
    {
        return this->id;
    }
    string getName()
    {
        return this->name;
    }
};

class  FullTime:public Employee
{
private:
    int salary;
public:
    FullTime(int id,string name,int salary):Employee(id,name)
    {
        this->salary=salary;
    }
    void setSalary(int salary)
    {
        this->salary=salary;
    }

    int getSalary()
    {
        return this->salary;
    }
};

class  PartTime:public Employee
{
private:
    int wage;
public:
    PartTime(int id,string name,int wage):Employee(id,name)
    {
        this->wage=wage;
    }
    void setWage(int wage)
    {
        this->wage=wage;
    }

    int getWage()
    {
        return this->wage;
    }
};

int main()
{
    FullTime f(1,"karan",23456);
    PartTime p(2,"arjun",8769);
    cout<<"Salary of "<<f.getName()<<" is "<<f.getSalary()<<endl;
    cout<<"Daily Wage of "<<p.getName()<<" is "<<p.getWage()<<endl;
    return 0;
}

