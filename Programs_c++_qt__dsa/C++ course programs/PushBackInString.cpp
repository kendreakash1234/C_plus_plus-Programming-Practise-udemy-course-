    #include <iostream>
    #include <string>
    
    using namespace std;
    
    int main()
    {
        string s;
        char t;
        cout<<"Enter String"<<endl;
        getline(cin,s);
        cout<<"Enter word to push"<<endl;
        cin>>t;
        s.push_back(t);
        cout<<"After push "<<s;
        return 0;
    }
