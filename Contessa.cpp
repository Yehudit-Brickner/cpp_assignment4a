#include "Player.hpp"
#include <iostream>
#include <stdexcept>
#include <string>

using namespace std;

using namespace coup;


Contessa::Contessa(Game & g, string n){
    cout<< "this is a constructor for Contessa"<< endl;
    this->_game=& g;
    this->_name=n;
    this->_coins=0;
    this->_role="Contessa";
    this->_state = 0;
    if (g._player.size()<6){
        g._player.push_back(& *this);
    }
    g.addplayer(n);
}

void Contessa::block(coup::Assassin a){
    cout<<"blocked"<<endl;
    unsigned long start=this->_game->_gameTurns.size()-1;
    unsigned long size=this->_game->_player.size();
    for (unsigned long i=start; i > start-size;i--){
        if(this->_game->_gameTurns[i].getPlayer()==&a and this->_game->_gameTurns[i].getAction()=="coup3" and this->_game->_gameTurns[i].getBlocked()==false ){
           cout<<"blocked"<<endl;
           vector<Player*> p=this->_game->_gameTurns[i].getDoneTo();
           p[0]->setState(0);
           this->_game->_gameTurns[i].setBlocked(true);
        } 
    }

}