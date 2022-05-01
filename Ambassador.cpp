
#include "Player.hpp"
#include <iostream>
#include <stdexcept>
#include <string>

using namespace std;

using namespace coup;


Ambassador::Ambassador(Game & g, string n){
    cout<< "this is a constructor for Ambassador"<< endl;
    this->_game= & g;
    this->_name=n;
    this->_coins=0;
    this->_role="Ambassador";
    this->_state = 0;
     if (g._player.size()<6){
        g._player.push_back(& *this);
    }
    g.addplayer(n);
}

void Ambassador::transfer(coup::Player p1, coup::Player p2){
    unsigned long turnn=(unsigned long)this->_game->_turn;
    if(this->_game->_player[turnn]!=this){
         throw std::invalid_argument( "not your turn!" ); 
    }
    if(this->_coins>=10){
        throw std::invalid_argument( "you have to do coup!" );  
    }
    p1.updateCoins(-1);
    p2.updateCoins(1);
    // vector<Player> v1={p1,p2};
    // Turn t1{*this, "transfer",v1};
    // this->_game.gameTurns.push(t1);
    this->_game->updateTurn(); 
}

// void Ambassador::block(coup::Captain c){
//     cout<<"blocked"<<endl;
// }