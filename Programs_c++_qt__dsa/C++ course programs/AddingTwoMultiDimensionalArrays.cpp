#include <iostream>

using namespace std;

int main()
{
   int n=5;
  int A[2][3]={1,2,3,4,5,6};
  int B[2][3]={9,8,7,6,5,4};
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<A[i][j]+B[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
