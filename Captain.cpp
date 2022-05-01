#include "Player.hpp"
#include <iostream>
#include <stdexcept>
#include <string>

using namespace std;

using namespace coup;


Captain::Captain(Game & g, string n){
    cout<< "this is a constructor for Captain"<< endl;
    this->_game=& g;
    this->_name=n;
    this->_coins=0;
    this->_role="Captain";
    this->_state = 0;
    if (g._player.size()<6){
        g._player.push_back(& *this);
    }
    g.addplayer(n);
}

void Captain::steal(coup::Player p){
    unsigned long turnn=(unsigned long)this->_game->_turn;
    if(this->_game->_player[turnn]!=this){
         throw std::invalid_argument( "not your turn!" ); 
    }
    if(this->_coins>=10){
        throw std::invalid_argument( "you have to do coup!" );  
    }
    p.updateCoins(-2);
    this->updateCoins(2);
    // vector<Player> v1={p};
    // Turn t1{*this, "steal"};
    // this->_game.gameTurns.push(t1);
    this->_game->updateTurn(); 
}


void Captain::block(coup::Captain c){
    cout<<"blocked"<<endl;
}