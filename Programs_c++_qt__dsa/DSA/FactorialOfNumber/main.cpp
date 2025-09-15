#include <iostream>

using namespace std;

//int Fact(int num)
//{
//    if(num==0)
//        return 1;
//    return num*Fact(num-1);
//}

int Fact(int num){
    int res=1;
    for(int i=1;i<=num;i++)
    {
        res=i*res;
    }
    return res;
}

int main()
{
    cout << "Enter the number" << endl;
    int num;
    cin>>num;
    cout<<"Factorial of "<<num<<" is "<<Fact(num)<<endl;
    return 0;
}

