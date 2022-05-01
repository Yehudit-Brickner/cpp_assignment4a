#include "Player.hpp"
#include <iostream>
#include <stdexcept>
#include <string>

using namespace std;

using namespace coup;


Assassin::Assassin(Game & g, string n) {
    cout<< "this is a constructor for Assassin"<< endl;
    this->_game= & g;
    this->_name=n;
    this->_coins=0;
    this->_role="Assassin";
    this->_state = 0;
     if (g._player.size()<6){
        g._player.push_back(& *this);
    }
    g.addplayer(n);
}


void Assassin::coup(Player p){
    unsigned long turnn=(unsigned long)this->_game->_turn;
    if(this->_game->_player[turnn]!=this){
         throw std::invalid_argument( "not your turn!" ); 
    }
    
    if(this->_coins<3){
         throw std::invalid_argument( "cant pay 3 coins" ); 
    }
    this->updateCoins(-3);
    // kill p
    p.setState(1);
    this->_game->updateTurn(); 
}