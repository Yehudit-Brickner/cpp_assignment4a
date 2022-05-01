

#include "Player.hpp"
#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;

using namespace coup;

// Player::Player(Game & g, string n){
//     cout<< "this is a constructor for player"<< endl;
//     this->_game=g;
//     this->_name=n;
//     this->_coins=0;
//     this->_role="Player";
//     // g._p.push_back(*this);
//     g.addplayer(*this);
// }
Player::Player(){
  
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
    return this->_coins;
}

void Player::setState(int s){
    this->_state=1;
}



void Player::income(){
    cout<<"income"<<endl;
    updateCoins(1);
    cout<<"added a coin"<<endl;
    this->_game.updateTurn();
}

void Player::foreign_aid(){
    updateCoins(2);
    this->_game.updateTurn();
}


void Player::block(coup::Player p){
    // will need a queue to hold the last full turns of things to know what to block and how to rool back
    cout<< "blocked"<<endl;
}



string Player::role(){
    return this->getName();
}


void Player::coup(coup::Player p){
    if (this->_role!="assassin"){
        if (this->_coins<7){
            throw std::invalid_argument( "cant pay 7 coins" ); 
        }
        this->setState(1);
        this->_game.updateTurn();

    }
    else{
        if (this->_coins<3){
            throw std::invalid_argument( "cant pay 3 coins" );  
        }
        this->setState(1);
        this->_game.updateTurn(); 
    }
}
