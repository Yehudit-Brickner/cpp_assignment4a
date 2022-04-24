#pragma once

#include "Player.hpp"

using namespace std;

namespace coup{
    class Captain : public Player{


        public:

            // int _coins;
            // Game _game;
            // string _name;

            //constructer
            Captain(Game g, string n);
                // setGame(g);
                // setName(n);
                // setCoins(0);
                // g.addplayer(*this);
            


            // void setName(string n) override{
            //     // this->_name=n;
            // }

            // void setGame(Game g) override{
            //     // this->_game=g;
            // }
          
            // void setCoins(int c) override{
            //     // this->_coins=c;
            // }

            void steal(Player p){
                // p.updateCoins(-2);
                // this->updateCoins(2);
            }
    };
}