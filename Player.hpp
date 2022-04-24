// #pragma once
#include <string>
// #include <iostream>
#include <vector>
#include "Game.hpp"

using namespace std;

namespace coup{
    class Player{
        // private:

        public:
            int _coins;
            string _role;
            Game _game;
            string _name;

        // public:

            Player(Game g, string n);


            int coins(){
                return this->_coins;
            }
            string role(){
                return this->_role;
            }

    }
}