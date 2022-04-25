#pragma once

#include "Player.hpp"
#include "Duke.hpp"

using namespace std;

namespace coup{
    class Captain : public Player{


        public:

            // int _coins;
            // Game _game;
            // string _name;

            //constructer
            Captain(Game g, string n);
               
            void income();
            int coins();
            void foreign_aid();
            void block(Duke d);
            void coup(Player p);
            void steal(Player p);
    };
}