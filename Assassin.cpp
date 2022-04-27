#include "Player.hpp"
#include <iostream>
#include <stdexcept>
#include <string>

using namespace std;

using namespace coup;


Assassin::Assassin(Game & g, string n) {
    cout<< "this is a constructor for Assassin"<< endl;
    this->_game=g;
    this->_name=n;
    this->_coins=0;
    this->_role="Assassin";
    //  g._p.push_back(*this);
    g.addplayer("Assassin");
}


void Assassin::coup(Player p){
    if(this->_coins<3){
         throw std::invalid_argument( "cant pay 3 coins" ); 
    }
    this->updateCoins(-3);
    // kill p
    this->_game.updateTurn();
}