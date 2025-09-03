#include <iostream>
#include<vector>
using namespace std;

void display_menu()
{
    cout<<"P\tPrint numbers\nA\tAdd numbers\n"
    "M\tDisplay mean\nS\tDisplay smallest number\n"
    "L\tDisplay Largest number\nF\tFind the number\nQ\tQuit\nEnter your choice : ";
}

void get_selection(char &selection)
{
    cin>>selection;
    selection = toupper(selection);
}

void handle_add_Numbers(vector<int> &v)
{
   cout<<"Enter the number to add in vector : ";
   int number{};
   cin>>number;
   v.push_back(number);
   cout<<number<<" is added to vector"<<endl<<endl;
}

void handle_display(const vector<int> &v)
{
    if(v.size() == 0){
        cout<<"Vector is empty"<<endl;
    }else{
        for(auto &x : v){
            cout<<x<<endl;
        }
    }
    cout<<endl;
}

void handle_mean(const vector<int> &v)
{
    int sum{0};
    if(v.size() == 0){
        cout<<"Vector is empty"<<endl;
    }else{
        for(auto &x : v){
            sum+=x;
        }
    }
    cout<<"Mean of vector is "<<sum/v.size()<<endl;
    cout<<endl;    
}

void handle_smallest_number(const vector<int> &v)
{
    int smallest{v[0]};
    if(v.size() == 0){
        cout<<"Vector is empty"<<endl;
    }else{
        for(auto &x : v){
            if(smallest>x)
                smallest = x;
        }
    }
    cout<<"Smallest number in vector is "<<smallest<<endl;
    cout<<endl;   
}

void handle_Largest_number(const vector<int> &v)
{
    int largest{v[0]};
    if(v.size() == 0){
        cout<<"Vector is empty"<<endl;
    }else{
        for(auto &x : v){
            if(largest<x)
                largest = x;
        }
    }
    cout<<"Largest number in vector is "<<largest<<endl;
    cout<<endl;   
}

void handle_quit()
{
    cout<<"You have selected to Quit"<<endl;
}

int get_number()
{
    int num{0};
    cout<<"Enter number to find : ";
    cin>>num;
    return num;
}

void handle_find(const vector<int> &v,int num)
{
    if(v.size() == 0){
        cout<<"Vector is empty"<<endl;
    }else{
        for(auto &x : v){
            if(num==x)
                cout<<num<<" is Present in vector"<<endl;
        }
    }
    cout<<endl;
}

int main()
{
    vector<int> v;
    char selection{};
    do{
        display_menu();
        get_selection(selection);
        switch(selection){
            case 'P':
                handle_display(v);
                break;
            case 'A':
                handle_add_Numbers(v);
                break;
            case 'M':
                handle_mean(v);
                break;
            case 'S':
                handle_smallest_number(v);
                break;
            case 'L':
                handle_Largest_number(v);
                break;
            case 'Q':
                handle_quit();
                break;
            case 'F':
                handle_find(v,get_number());
                break;
            default:
                cout<<"Enter Valid choice"<<endl;
        }
    }while(selection!='Q');
    return 0;
}

