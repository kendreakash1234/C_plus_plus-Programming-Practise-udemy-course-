    #include <iostream>
    #include <string>
    
    using namespace std;
    
    int main()
    {
        string s;
        char t;
        cout<<"Enter String"<<endl;
        getline(cin,s);

        s.pop_back();
        cout<<"After pop "<<s;
        return 0;
    }
 