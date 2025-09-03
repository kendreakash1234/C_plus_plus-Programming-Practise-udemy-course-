#include <iostream>
#include<vector>
using namespace std;

int main()
{
    int scores[]{1,2,3,4,5};
    
    cout<<*scores<<endl;
    cout<<scores[0]<<endl;
    
    int *scores_ptr{scores};

    cout<<scores_ptr[1]<<endl;
    cout<<*(scores_ptr+1)<<endl;
    cout<<scores_ptr[2]<<endl;
    cout<<*(scores_ptr+2)<<endl;
    return 0;
}



