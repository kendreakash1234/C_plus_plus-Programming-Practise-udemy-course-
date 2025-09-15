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
       cout<<"string or char index is "<< s.find(index);
        return 0;
    }
