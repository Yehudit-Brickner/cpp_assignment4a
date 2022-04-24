
#include "Player.hpp"


#include <iostream>
#include <stdexcept>
#include <string>
// #include "Game.hpp"

using namespace coup;

Player::Player(Game g, string n){
    cout<< "this is a constructor for player"<< endl;
    this->_game=g;
    this->_name=n;
    this->_coins=0;
    this->_role="player";
}