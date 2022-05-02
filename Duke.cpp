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
    Turn t1{*this,0, "tax"};
    this->_game->gameTurns.push(t1);
    this->_game->_gameTurns.push_back(t1);
    this->_game->updateTurn(); 
}


void Duke::block(Player pl){
   
    unsigned long start=this->_game->_gameTurns.size()-1;
    unsigned long size=this->_game->_player.size();
    for (unsigned long i=start; i > start-size;i--){
        if(this->_game->_gameTurns[i].getPlayer()==&pl and this->_game->_gameTurns[i].getAction()=="foreign_aid" and this->_game->_gameTurns[i].getBlocked()==false ){
           cout<<"blocked"<<endl;
           vector<Player*> p=this->_game->_gameTurns[i].getDoneTo();
           p[0]->updateCoins(-2);
        }
    }
           
}