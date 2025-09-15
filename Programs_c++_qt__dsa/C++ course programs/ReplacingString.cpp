    #include <iostream>
    #include <string>
    
    using namespace std;
    
    int main()
    {
        string s,t;
        int from,howmany
        cout<<"Enter String"<<endl;
        getline(cin,s);
        cout<<"enter string to replace"<<endl;
        getline(cin,t);
        cout<<"enter from where you want to replace"<<endl;
        cin>>from;
        cout<<"How many words you want to replace"<<endl;
        cin>>howmany;
        s.replace(from,howmany,t);
        cout<<"After replaceing"<<endl;
        cout<<s;
        return 0;
    }
 