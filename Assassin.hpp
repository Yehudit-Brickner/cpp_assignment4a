#pragma once

#include "Player.hpp"

using namespace std;

namespace coup{
    class Assassin : public Player{


        public:

            int _coins;
            Game _game;
            string _name;

            //constructer
            Assassin(Game g, string n);
                // setGame(g);
                // setName(n);
                // setCoins(0);
                // g.addplayer(*this);
            


            void setName(string n) override{
                // this->_name=n;
            }

            void setGame(Game g) override{
                // this->_game=g;
            }
          
            void setCoins(int c) override{
                // this->_coins=c;
            }

            void coup(Player p){
                // this->updateCoins(-3);
                // kill p
            }
    };
}