#include "Mystring.h"

Mystring::Mystring():str{nullptr}{
    cout<<"Default"<<endl;
    str = new char[1];
    *str = '\0';
}

Mystring::Mystring(const char *source):str{nullptr}{
    cout<<"Overloaded"<<endl;
    if(source == nullptr)
    {
        cout<<"Overloaded"<<endl;
        str = new char[1];
        *str = '\0';
    }else{
        str = new char[strlen(source)+1];
        strcpy(str,source);
    }
}

Mystring::Mystring(const Mystring &source){
    cout<<"Copy constructor"<<endl;
    if(source.str == nullptr)
    {
        str = new char[1];
        *str = '\0';
    }else{
        str = new char[strlen(source.str)+1];
        strcpy(str,source.str);
    }
}

Mystring::Mystring(Mystring &&source){
    cout<<"Move constructor"<<endl;
    str = source.str;
    source.str = nullptr;
}

Mystring &Mystring::operator=(const Mystring &other){
    cout<<"Copy assignment operator"<<endl;
    if(this == &other)
        return *this;
    delete [] str;
    
    str = new char[strlen(other.str)+1];
    strcpy(str,other.str);    
    
    return *this;
}

Mystring &Mystring::operator=(Mystring &&other){
    cout<<"Move assignment operator"<<endl;
    if(this == &other)
        return *this;
    delete [] str;
    
    str = other.str;
    other.str = nullptr;
    return *this;
}

void Mystring::display()
{
    cout<<"String is "<<str<<endl;
}

int Mystring::get_length()const{
    return strlen(str);
}
Mystring::~Mystring()
{
    delete [] str;
}