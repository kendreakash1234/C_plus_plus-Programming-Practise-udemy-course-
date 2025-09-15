    #include <iostream>
    #include <string>
    #include <cstring>
    
    using namespace std;
    
    int main()
    {
        string s1;
        char t[10];
        cout<<"Enter s1 = ";
        getline(cin,s1);
        
        s1.copy(t,s1.length());
        cout<<"copy = "<<t<<endl;
        return 0;
    }
