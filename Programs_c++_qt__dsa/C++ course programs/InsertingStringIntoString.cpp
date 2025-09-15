    #include <iostream>
    #include <string>
    
    using namespace std;
    
    int main()
    {
        string s,t;
        cout<<"Enter String"<<endl;
        getline(cin,s);
        cout<<"enter string to insert"<<endl;
        getline(cin,t);
        s.insert(3,t);
        // s.insert(3,t,3);
        cout<<"After inserting"<<endl;
        cout<<s;
        return 0;
    }
