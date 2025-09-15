    #include <iostream>
    #include <string>
    
    using namespace std;
    
    int main()
    {
        string s1,s2;
        char t;
        cout<<"Enter s1 = ";
        getline(cin,s1);
        cout<<"Enter s2 = ";
        getline(cin,s2);

        s1.swap(s2);
        cout<<"After swapping "<<endl;
        cout<<"s1 = "<<s1<<endl;
        cout<<"s2 = "<<s2<<endl;
        return 0;
    }
