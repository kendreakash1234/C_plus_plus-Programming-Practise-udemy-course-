#include <iostream>
using namespace std;
#include <cstring>
class Mystring{
    
    char *str;
    
    public:
    Mystring();
    Mystring(const char *source);
    Mystring(const Mystring &source);//copy constructor
    Mystring(Mystring &&source);//Move constructor
    Mystring& operator=(const Mystring &other);//Copy assignment operator
    Mystring& operator=(Mystring &&other);//Move assignment operator
    int get_length()const;
    void display();
    ~Mystring();//destructor
};