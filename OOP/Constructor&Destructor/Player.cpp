#include "Player.h"

Player::Player(){
    cout<<"Default constructor called"<<endl;
}

Player::Player(string s){
    cout<<"Parameterized 1 constructor called"<<endl;
    name = s;
}

Player::Player(string s, int a){
    cout<<"Parameterized 2 constructor called"<<endl;
    name = s;
}

Player::~Player(){
    cout<<"Destrctor called"<<endl;
}