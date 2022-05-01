
#include "Player.hpp"
#include <iostream>
#include <stdexcept>
#include <string>

using namespace std;

using namespace coup;


Ambassador::Ambassador(Game & g, string n){
    cout<< "this is a constructor for Ambassador"<< endl;
    this->_game=g;
    this->_name=n;
    this->_coins=0;
    this->_role="Ambassador";
    this->_state = 0;
    //  g._p.push_back(*this);
    g.addplayer("Ambassador");
}

void Ambassador::transfer(coup::Player p1, coup::Player p2){
    p1.updateCoins(-1);
    p2.updateCoins(1);
    this->_game.updateTurn();
}