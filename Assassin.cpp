#include "Player.hpp"
#include <iostream>
#include <stdexcept>
#include <string>

using namespace std;

using namespace coup;


Assassin::Assassin(Game g, string n) {
    cout<< "this is a constructor for Assassin"<< endl;
    this->_game=g;
    this->_name=n;
    this->_coins=0;
    this->_role="Assassin";
}


// void Assassin::income(){
//     updateCoins(1);
// }

// int Assassin::coins(){
//     return this->getCoins();
// }

// void Assassin::foreign_aid(){
//     updateCoins(2);
// }


// void Assassin::coup(Player p){
//     this->updateCoins(-3);
//     // kill p
// }