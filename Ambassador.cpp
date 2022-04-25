
#include "Ambassador.hpp"
#include <iostream>
#include <stdexcept>
#include <string>

using namespace std;

using namespace coup;


Ambassador::Ambassador(Game g, string n){
    cout<< "this is a constructor for Ambassador"<< endl;
    this->_game=g;
    this->_name=n;
    this->_coins=0;
    this->_role="Ambassador";
}




void Ambassador::income(){
    updateCoins(1);
}

int Ambassador::coins(){
    return this->getCoins();
}

void Ambassador::foreign_aid(){
    updateCoins(2);
}

void Ambassador::block(Player p){
    
}

void Ambassador::coup(Player p){
    this->updateCoins(-7);
}


void transfer(Player p1, Player p2){
    // p1.updateCoins(-1);
    // p2.updateCoins(1);
}