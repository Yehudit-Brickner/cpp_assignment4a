#include "Duke.hpp"


#include <iostream>
#include <stdexcept>
#include <string>

using namespace std;

using namespace coup;


Duke::Duke(Game g, string n){
    cout<< "this is a constructor for Duke"<< endl;
    this->_game=g;
    this->_name=n;
    this->_coins=0;
    this->_role="Duke";
}


void Duke::income(){
    updateCoins(1);
}

int Duke::coins(){
    return this->getCoins();
}

void Duke::foreign_aid(){
    updateCoins(2);
}

void Duke::block(Player p){
    
}




void Duke::tax(){
    this->updateCoins(3);
}
