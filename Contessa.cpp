#include "Contessa.hpp"
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

