#include "Player.h"

Player::Player(string lname, int lage)
    :name{lname}, age{lage}
    {
        
    }

void Player::display(){
    cout<<name<<" is "<<age<<" years old"<<endl;
}