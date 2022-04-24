#pragma once
#include "Player.hpp"

using namespace std;

namespace coup{
    class Assassin : public Player{


        public:

            //constructer
            Assassin(Game g, string n);



            void coup(Player p){
                this->updateCoins(-3);
                // kill p
            }
    };
}