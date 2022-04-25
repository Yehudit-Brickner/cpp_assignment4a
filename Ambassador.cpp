
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
    //  g._p.push_back(*this);
    g.addplayer(*this);
}




// void Ambassador::income(){
//     updateCoins(1);
// }

// int Ambassador::coins(){
//     return this->getCoins();
// }

// void Ambassador::foreign_aid(){
//     updateCoins(2);
// }

// void Ambassador::block(Player p){
    
// }

// void Ambassador::coup(Player p){
//     this->updateCoins(-7);
// }


void Ambassador::transfer(coup::Player p1, coup::Player p2){
    // p1.updateCoins(-1);
    // p2.updateCoins(1);
}