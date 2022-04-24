#pragma once
#include "Player.hpp"

using namespace std;

namespace coup{
    class Contessa : public Player{



        // public:

    
            //constructer
            Contessa(Game g, string n);


            int coins(){
                return this->_coins;
            }

          




    };
}