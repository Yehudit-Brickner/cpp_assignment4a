#pragma once
#include "Player.hpp"

using namespace std;

namespace coup{
    class Ambassador : public Player{


    public: 

     //constructer
        Ambassador(Game g, string n);




        void transfer(Player p1, Player p2){
            p1.updateCoins(-1);
            p2.updateCoins(1);
        }



    
    };
}