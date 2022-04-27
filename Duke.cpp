#include "Player.hpp"


#include <iostream>
#include <stdexcept>
#include <string>

using namespace std;

using namespace coup;


Duke::Duke(Game & g, string n){
    cout<< "this is a constructor for Duke"<< endl;
    this->_game = g;
    this->_name = n;
    this->_coins = 0;
    this->_role = "Duke";
    // g._p.push_back(*this);
    g.addplayer("Duke");
}

void Duke::tax(){
    this->updateCoins(3);
    cout<<"duke took tax"<<endl;
    this->_game.updateTurn();
}
