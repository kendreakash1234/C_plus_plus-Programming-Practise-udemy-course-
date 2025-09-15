#include <iostream>

using namespace std;

int Trailingzeroes(int num)
{
    int count=0;
    while(num%10==0)
    {
        count++;
        num/=10;
    }
    return count;
}
int Fact(int num)
{
    if(num==0)
        return 1;
    return num*Fact(num-1);
}
int main()
{
    cout << "Enter the number" << endl;
    int num;
    cin>>num;
    int res=0;
    //for higher number
    for(int i=5;i<=num;i=i*5)
    {
        res=res+num/i;
    }
    cout<<"Trailing zeroes in a "<<num<<" is "<<res<<endl;

   /* //for low number
    int fact=Fact(num);
    cout<<fact<<endl;
    cout<<"Trailing zeroes in a "<<num<<" is "<<Trailingzeroes(fact)<<endl;
    */
    return 0;
}
