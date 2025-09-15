#include <iostream>
using namespace std;



int main()
{
    string s1{"akash"};
    string s2{"akash"};
    string s3{"kendre"};
    
    string *p1{&s1};
    string *p2{&s2};
    string *p3{&s1};
        
    cout<<"(p1==p2) = "<<(p1==p2)<<endl;    
    cout<<"(p1==p3) = "<<(p1==p3)<<endl<<endl;    
   
    cout<<"(*p1==*p2) = "<<(*p1==*p2)<<endl;    
    cout<<"(*p1==*p3) = "<<(*p1==*p3)<<endl<<endl;        
    
    p3 = &s3;
    cout<<"(*p1==*p3) = "<<(*p1==*p3)<<endl;        

    return 0;
}



