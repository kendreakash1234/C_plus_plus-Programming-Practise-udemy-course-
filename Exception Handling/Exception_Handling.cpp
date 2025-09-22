#include <iostream>
using namespace std;

double calc_avg(int sum, int total)
{
    if(total == 0)
        throw 0;
    else if(total<0)
        throw string{"Negative Value Error"};
    return static_cast<double>(sum)/total;
}

int main()
{
    int sum{};
    cout<<"Enter sum : ";
    cin>>sum;
    
    int total{};
    cout<<"Enter total numbers ";
    cin>>total;
    
    int average{};
    cout<<"\nUsing if else"<<endl;
    if(total==0)
        cout<<"Can't devide by zero"<<endl;
    else if(total < 0)
        cout<<"Negative Value Error"<<endl;
    else{
        average = sum/total;
        cout<<"Average = "<<average<<endl;
    }
        
    cout<<"\nUsing try catch"<<endl;
    try{
    if(total==0)
        throw 0;
    else if(total < 0)
        throw string{"Negative Value Error"};
    average = sum/total;
    cout<<"Average = "<<average<<endl;
    }catch(int &ex){
        cout<<"Can't devide by zero"<<endl;
    }catch(string &str){
        cout<<str<<endl;
    }
    
    cout<<"\nUsing function throw"<<endl;
    try{
        average = calc_avg(sum,total);
        cout<<"Average = "<<average<<endl;
    }catch(int &ex){
        cout<<"Can't devide by zero"<<endl;
    }catch(string &str){
        cout<<str<<endl;
    }catch(...){
        cout<<"Unknown exceptoin"<<endl;
    }
    
    return 0;
}