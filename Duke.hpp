#pragma once
#include <iostream>
#include "Player.hpp"

using namespace std;

namespace coup{
    class Duke : public Player{


        public:

            // int _coins;
            // Game _game;
            // string _name;

       //constructer
            Duke(Game g, string n);
            //     cout<< "this is a constructer for ambassador"<< endl;
            // }
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



        void tax(){
            // this->updateCoins(3);
        }
    };
}