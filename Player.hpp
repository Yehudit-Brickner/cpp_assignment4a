#pragma once
#include <string>
#include <iostream>
#include <vector>

using namespace std;

namespace coup{
    class Player{
        private:
            int _coins;
            string _role;
            Game _game;
            string _name;

        public:

            Player(string g, sting n);


            int coins(){
                return this->_coins;
            }
            string role(){
                return this->_role;
            }

    }
}