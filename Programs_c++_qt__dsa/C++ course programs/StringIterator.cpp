    #include <iostream>
    #include <string>
    #include <cstring>
    
    using namespace std;
    
    int main()
    {
        string::iterator it;
        string str;
        cout<<"Enter string"<<endl;
        getline(cin,str);
        for(it=str.begin();it!=str.end();it++)
        {
            cout<<*it;
        }
        return 0;
    }
