#include "Constructor.h"

Player::Player(){
        name ="None";
        age = 0;
    }
Player::Player(string s, int a){
        name = s;
        age = a;
    }
    void Player::set_name(string s){
        name=s;
    }
    string Player::get_name(){
        return name;
    }
    void Player::set_age(int a){
        age = a;
    }
    int Player::get_age(){
        return age;
    }
    void Player::display(){
        cout<<name<<" is "<<age<<" years old"<<endl;
    }
Player::~Player(){
        cout<<"Destructor called"<<endl;
    }
