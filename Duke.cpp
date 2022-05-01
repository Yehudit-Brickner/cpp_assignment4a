#include "Player.hpp"


#include <iostream>
#include <stdexcept>
#include <string>

using namespace std;

using namespace coup;


Duke::Duke(Game & g, string n){
    cout<< "this is a constructor for Duke"<< endl;
    this->_game = & g;
    this->_name = n;
    this->_coins = 0;
    this->_role = "Duke";
    this->_state = 0;
    if (g._player.size()<6){
        g._player.push_back(& *this);
    }
    g.addplayer(n);
}

void Duke::tax(){
    unsigned long turnn=(unsigned long)this->_game->_turn;
    if(this->_game->_player[turnn]!=this){
         throw std::invalid_argument( "not your turn!" ); 
    }
    if(this->_coins>=10){
        throw std::invalid_argument( "you have to do coup!" );  
    }
    this->updateCoins(3);
    cout<<"duke took tax"<<endl;
    // Turn t1{*this, "tax"};
    // this->_game.gameTurns.push(t1);
    this->_game->updateTurn(); 
}


void Duke::block(Player p){
    cout<<"blocked"<< endl;
}