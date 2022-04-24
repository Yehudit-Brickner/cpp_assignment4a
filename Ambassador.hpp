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
                            

            // void setName(string n) override{
            //     // this->_name=n;
            // }

            // void setGame(Game g) override{
            //     // this->_game=g;
            // }
          
            // void setCoins(int c) override{
            //     // this->_coins=c;
            // }

            void transfer(Player p1, Player p2);
    
    };
}