#include "Captain.hpp"
#include <iostream>
#include <stdexcept>
#include <string>

using namespace std;

using namespace coup;


Captain::Captain(Game g, string n){
    cout<< "this is a constructor for Captain"<< endl;
    this->_game=g;
    this->_name=n;
    this->_coins=0;
    this->_role="Captain";
}


void Captain::income(){
    updateCoins(1);
}

int Captain::coins(){
    return this->getCoins();
}

void Captain::foreign_aid(){
    updateCoins(2);
}

void Captain::block(Duke d){
    
}

void Captain::coup(Player p){
     this->updateCoins(-7);
}

void Captain::steal(Player p){
    // p.updateCoins(-2);
    // this->updateCoins(2);
}