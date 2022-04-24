#pragma once
#include <string>
#include <iostream>
#include <vector>
#include "Game.hpp"

using namespace std;

namespace coup {
    class Player {
       
        public:
            int _coins;
            Game _game;
            string _name;
            string _role;

        
            //constructer
            Player(Game g, string n);

            Player();
            
            int coins();
           
            void updateCoins(int u);
           
            string getName();
              
            int getCoins();
            
            virtual string role();
            
            void income();

            void foreign_aid();

            virtual void block(Player p);

          


            //  void setName(string n){
            //     // this->_name=n;
            // }

            //  void setGame(Game g){
            //     // this->_game=g;
            // }
          
            //  void setCoins(int c){
            //     // this->_coins=c;
            // }

            // virtual Game getGame(){
            //     // return this->_game;
            //     Game g= Game();
            //     return g;
            // }


            
    };
}















