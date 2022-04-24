#pragma once
#include "Player.hpp"

using namespace std;

namespace coup{
    class Contessa : public Player{



        // public:

            int _coins;
            string _role;
            Game _game;
            string _name;

            // constructer
            Contessa(Game g, string n);


            int coins(){
                return this->_coins;
            }
            string role(){
                return this->_role;
            }




    };
}