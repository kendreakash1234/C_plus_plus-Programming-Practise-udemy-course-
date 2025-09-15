    #include <iostream>
    #include <string>
    #include <cstring>
    
    using namespace std;
    
    int main()
    {
        string s,index;
        cout<<"Enter string s1 = ";
        getline(cin,s);
        cout<<"Enter string or char to find index"<<endl;
        getline(cin,index);
        cout<<"first index is "<< s.find_first_of(index)<<endl;
        cout<<"last index is "<< s.find_last_of(index)<<endl;
        cout<<"substring  "<< s.substr(3,6)<<endl;
        cout<<"comparing string with char oms str "<<s.compare("a");
        
        return 0;
    }
