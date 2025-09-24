#include <iostream>
#include<fstream>
using namespace std;
#include<map>
int main()
{
    std::ifstream file;
    file.open("myfile.txt",std::ios::in);
    std::ofstream out_file{"copy.txt"};
    string str;
    bool write = false;
    map<string , int> m;
    if(!out_file){
        cerr<<"Error Opening file"<<endl;
        return 1;
    }else{
    write = true;
    }
    if(file.is_open())
    {
        cout<<"File is opened"<<endl;
        while(getline(file,str)){
            if(write){
                    out_file<<str<<endl;
            }
            cout<<str<<" ";
            m[str]++;
        }
    }else{
        cout<<"File is not opened"<<endl;
    }
    cout<<endl;
    file.close();
    cout<<"\nPrinting map with count"<<endl;
    for(auto x : m)
        cout<<x.first<<" "<<x.second<<endl;

    return 0;
}
