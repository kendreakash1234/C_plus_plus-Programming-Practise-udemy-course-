#include <iostream>
using namespace std;

int main()
{
    //Declaration & Initialization
    cout<<"Declaration & Initialization"<<endl;
    int num1{10};
    int num2{20};
    cout<<"Num1 = "<<num1<<endl;
    cout<<"Num2 = "<<num2<<endl;
    
    //Assignment
    cout<<"Assignment"<<endl;
    num1 = num2 = 1000;
    cout<<"Num1 = "<<num1<<endl;
    cout<<"Num2 = "<<num2<<endl;
    
    num1 = 100;
    num2 = 200;
    cout<<"Num1 = "<<num1<<endl;
    cout<<"Num2 = "<<num2<<endl;
    
    //Arithmetic
    cout<<"Arithmetic"<<endl;
    int additon = num1+num2;
    int substraction = num1-num2;
    int mul = num1*num2;
    int division = num2/num1;
    int modulus=num2%num1;
    
    cout<<"Addition \t"<<num1<<" + "<<num2<<" = "<<additon<<endl;
    cout<<"substraction \t"<<num1<<" - "<<num2<<" = "<<substraction<<endl;
    cout<<"mul \t\t"<<num1<<" * "<<num2<<" = "<<mul<<endl;
    cout<<"division \t"<<num1<<" / "<<num2<<" = "<<division<<endl;
    cout<<"modulus \t"<<num1<<" % "<<num2<<" = "<<modulus<<endl;
    
    //Increament/Decreament
    cout<<"Increament/Decreament"<<endl;
    int count{10};
    int result{0};
    
    //all three are same if they are used as seperate statement 
    count = count+1;
    count++;
    ++count;
    
    cout<<"Count "<<count<<endl;
    
    count = 10;
    cout<<"After Postfix \nCount "<<count<<endl;
    result = count++;
    cout<<"Count "<<count<<endl;
    cout<<"Result "<<result<<endl;
    
    count = 10;
    cout<<"After Prefix\nCount "<<count<<endl;
    result = ++count;
    cout<<"Count "<<count<<endl;
    cout<<"Result "<<result<<endl;

    //static casting
    cout<<"Static casting"<<endl;
    int mark1{90}, mark2{92},mark3{96},total{};
    const int dev{3};
    cout<<"Mark1 "<<mark1<<" mark2 = "<<mark2<<" mark3 "<<mark3<<endl;
    
    total = mark3+mark2+mark1;
    
    double average{0.0};
    average = static_cast<double>(total)/dev;
    
    cout<<"Average = "<<average<<endl;
    
    //Equaliti(== , !=)
    cout<<"Equallity (== !=)"<<endl;
    int n1 = 30;
    int n2 = 50;
    cout<<"n1 == n2 = "<<(n1==n2)<<endl;
    cout<<"n1 != n2 = "<<(n1!=n2)<<endl;
    cout<<std::boolalpha;
    cout<<"n1 == n2 = "<<(n1==n2)<<endl;
    cout<<"n1 != n2 = "<<(n1!=n2)<<endl;
    cout<<"n1 != n2 = "<<(n1!=n2)<<endl;
    cout<<"n1 != n2 = "<<(n1!=n2)<<endl;
    cout<<"n1 != n2 = "<<(n1!=n2)<<endl;
    cout<<"n1 != n2 = "<<(n1!=n2)<<endl;
    
    //Relational
    cout<<"Relational"<<endl;
    cout<<"n1 > n2 = "<<(n1>n2)<<endl;
    cout<<"n1 < n2 = "<<(n1<n2)<<endl;
    cout<<"n1 >= n2 = "<<(n1>=n2)<<endl;
    cout<<"n1 <= n2 = "<<(n1<=n2)<<endl;
    // cout<<"n1 <=> n2 = "<<(n1<=>n2)<<endl;//c++20

    //Logical(&&,||,!)
    cout<<"Logical"<<endl;
    cout<<"(1 && 1) = "<<(1 && 1)<<endl;
    cout<<"(1 && 0) = "<<(1 && 0)<<endl;
    cout<<"(0 && 1) = "<<(0 && 1)<<endl;
    cout<<"(0 && 0) = "<<(0 && 0)<<endl;
   
    cout<<"(1 || 1) = "<<(1 || 1)<<endl;
    cout<<"(1 || 0) = "<<(1 || 0)<<endl;
    cout<<"(0 || 1) = "<<(0 || 1)<<endl;
    cout<<"(0 || 0) = "<<(0 || 0)<<endl; 
    cout<<"!1 = "<<(!1)<<endl;
    cout<<"!0 = "<<(!0)<<endl;
    
    return 0;
}