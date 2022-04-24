#pragma once

#include "Player.hpp"

using namespace std;

namespace coup{
    class Assassin : public Player{

        public:

            // int _coins;
            // Game _game;
            // string _name;

            //constructer
            Assassin(Game g, string n);
                
            void income();
            void foreign_aid();
            void block(Player p);
            void coup(Player p);
    };
}