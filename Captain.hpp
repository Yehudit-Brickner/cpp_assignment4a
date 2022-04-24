#pragma once
#include "Player.hpp"

using namespace std;

namespace coup{
    class Captain : public Player{


        public:

        

            //constructer
            Captain(Game g, string n);

            void steal(Player p){
                p.updateCoins(-2);
                this->updateCoins(2);
            }
    };
}