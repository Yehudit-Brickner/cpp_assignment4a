

#include "Player.hpp"
#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;

using namespace coup;

Player::Player(Game g, string n){
    cout<< "this is a constructor for player"<< endl;
    this->_game=g;
    this->_name=n;
    this->_coins=0;
    this->_role="Player";
}




string Player::getName(){
    return this->_name;
}

int  Player::getCoins(){
    return this->_coins;
}

void Player::updateCoins(int u){
    int num = this->getCoins();
    num=num+u;
    this->_coins=num;
}

int Player::coins(){
    return -1;
}



void Player::income(){
    // updateCoins(1);
}

void Player::foreign_aid(){
    // updateCoins(2);
}


void Player::block(Player p){
    // will need a queue to hold the last full turns of things to know what to block and how to rool back
    cout<< "blocked"<<endl;
}



string Player::role(){
    return this->getName();
}


void Player::coup(Player p){
    
}
