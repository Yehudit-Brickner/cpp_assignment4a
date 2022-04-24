
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

void transfer(Player p1, Player p2){
    p1.updateCoins(-1);
    p2.updateCoins(1);
}