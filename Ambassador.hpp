#pragma once
#include <iostream>
#include "Player.hpp"

using namespace std;

namespace coup{
    class Ambassador : public Player{


    public: 
        // int _coins;
        // Game _game;
        // string _name; 


        //constructer
        Ambassador(Game g, string n);
                        

        void income();
        int coins();
        void foreign_aid();
        void block(Player p);
        void coup(Player p);
        void transfer(Player p1, Player p2);
    
    };
}