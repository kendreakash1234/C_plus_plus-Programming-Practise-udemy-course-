#include <iostream>
#include <memory>
#include <vector>
using namespace std;

class Test{
    int data;
    public:
    Test():data{0}{

    }
    Test(int num):data{num}{
        cout<<"Constructor "<<data<<endl;
    }
    int get_data(){
        return data;
    }
    ~Test(){
        cout<<"Destructor "<<data<<endl;
    }
};

unique_ptr<vector<shared_ptr<Test>>> make(){
    return make_unique<vector<shared_ptr<Test>>>();
}

void fill(vector<shared_ptr<Test>> &obj, int num)
{
    for(int i=0;i<num;i++){
        cout<<"Enter the data"<<endl;
        int data;
        cin>>data;
        shared_ptr<Test> shared_temp = make_shared<Test>(data);
        obj.push_back(shared_temp);
    }
}

void display(vector<shared_ptr<Test>> &obj, int num)
{
    for(int i=0;i<num;i++){
        cout<<obj.at(i)->get_data()<<endl;
    }
}
int main()
{
    unique_ptr<vector<shared_ptr<Test>>> vec_ptr;
    vec_ptr = make();
    cout<<"Enter the number of values"<<endl;
    int num;
    cin>>num;
    fill(*vec_ptr, num);
    display(*vec_ptr, num);

    return 0;
}
