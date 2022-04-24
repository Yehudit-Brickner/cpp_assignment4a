#pragma once
#include "Player.hpp"

using namespace std;

namespace coup{
    class Contessa : public Player{

       public:
            // int _coins;
            // Game _game;
            // string _name;
    
           //constructer
            Contessa(Game g, string n);      

            void income();
            void foreign_aid();
            void block(Player p);
            
    };
}