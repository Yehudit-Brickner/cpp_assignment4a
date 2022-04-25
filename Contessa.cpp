#include "Player.hpp"
#include <iostream>
#include <stdexcept>
#include <string>

using namespace std;

using namespace coup;


Contessa::Contessa(Game g, string n){
    cout<< "this is a constructor for Contessa"<< endl;
    this->_game=g;
    this->_name=n;
    this->_coins=0;
    this->_role="Contessa";
}

void Contessa::income(){
    updateCoins(1);
}

int Contessa::coins(){
    return this->getCoins();
}

void Contessa::foreign_aid(){
    updateCoins(2);
}

void Contessa::coup(Player p){
     this->updateCoins(-7);
}

void Contessa::block(Assassin a){
    
}