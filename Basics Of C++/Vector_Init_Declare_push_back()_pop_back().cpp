#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<char> vowels{'a','e','i','o','u'};
    cout<<"Vowles at 0 "<<vowels[0]<<endl;
    cout<<"Vowles at 4 "<<vowels[4]<<endl;
    
    vector<int> test_scores{100,200,300};
    cout<<"After declaration "<<endl;
    for(int i : test_scores)
        cout<<i<<endl;
    
    cout<<"After 4 push_back(element) operation"<<endl;
    test_scores.push_back(400);
    test_scores.push_back(500);
    test_scores.push_back(600);
    test_scores.push_back(700);
    
    // cout<<"test_scores at 0 "<<test_scores[0]<<endl;
    // cout<<"test_scores at 2 "<<test_scores[2]<<endl;
    // cout<<"test_scores at 3 "<<test_scores[3]<<endl;
    // cout<<"test_scores at 4 "<<test_scores[4]<<endl;
    // cout<<"test_scores at 5 "<<test_scores[5]<<endl;
    // cout<<"test_scores at 6 "<<test_scores[6]<<endl;
    
    for(int i : test_scores)
        cout<<i<<endl;
    
    cout<<"After 2 pop_back() operation"<<endl;
    test_scores.pop_back();
    test_scores.pop_back();
    
    for(int i : test_scores)
        cout<<i<<endl;
    
	vector<int> vector1,vector2;

    vector1.push_back(10);
    vector1.push_back(20);

    cout<<"First element in vector "<<vector1.at(0)<<endl;
    cout<<"Second element in vector "<<vector1.at(1)<<endl;
    cout<<"Size of vector "<<vector1.size()<<endl;

    vector2.push_back(100);
    vector2.push_back(200);

    cout<<"First element in vector "<<vector2.at(0)<<endl;
    cout<<"Second element in vector "<<vector2.at(1)<<endl;
    cout<<"Size of vector "<<vector2.size()<<endl;
    
    vector<vector<int>> vector2D;
    vector2D.push_back(vector1);
    vector2D.push_back(vector2);

    
    cout<<"First element in vector "<<vector2D.at(0).at(0)<<endl;
    cout<<"Second element in vector "<<vector2D.at(0).at(1)<<endl;
    cout<<"Third element in vector "<<vector2D.at(1).at(0)<<endl;
    cout<<"Fourth element in vector "<<vector2D.at(1).at(1)<<endl;
    
    vector1.at(0) = 1000;
    cout<<"First element in vector "<<vector2D.at(0).at(0)<<endl;

    cout<<"Accessing out of bound element "<<endl;
    cout<<test_scores.at(10);
    
    return 0;
}