#include "Player.hpp"
#include <iostream>
#include <stdexcept>
#include <string>

using namespace std;

using namespace coup;


Captain::Captain(Game & g, string n){
    cout<< "this is a constructor for Captain"<< endl;
    this->_game=g;
    this->_name=n;
    this->_coins=0;
    this->_role="Captain";
    this->_state = 0;
     g._player.push_back(*this);
    g.addplayer("Captain");
}

void Captain::steal(coup::Player p){
    p.updateCoins(-2);
    this->updateCoins(2);
    this->_game.updateTurn();
}