#pragma once
#include "Player.hpp"

using namespace std;

namespace coup{
    class Duke : public Player{


        public:

        //constructer
        Duke(Game g, string n);

        void tax(){
            this->updateCoins(3);
        }
    };
}