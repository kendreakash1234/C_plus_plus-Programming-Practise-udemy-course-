#include <iostream>

using namespace std;

int main()
{
   float BasicSalary,Allowence,deduction,netSallary;
   cout<<"Enter the basic sallary percentage of allowence and percentage of deduction"<<endl;
   cin>>BasicSalary>>Allowence>>deduction;
   netSallary=BasicSalary+(BasicSalary*Allowence)/100-(BasicSalary*deduction)/100;
   cout<<"Net Salary is "<<netSallary;
}
