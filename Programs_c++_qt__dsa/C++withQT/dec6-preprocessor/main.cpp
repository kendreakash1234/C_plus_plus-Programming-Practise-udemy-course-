#include <iostream>
#define PI 3.14
#ifndef PI
#define PI 3.145
#endif
#define c cout
#define SQR(x)(x*x)
#define msg(x) #x
#define max(x,y)(x>y?x:y)
using namespace std;

int main()
{
    c<<PI<<endl;
    c<<SQR(9)<<endl;
    c<<max(4,7)<<endl;
    c<<msg(hello)<<endl;
    return 0;
}

