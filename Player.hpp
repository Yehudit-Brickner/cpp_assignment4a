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
            

            // virtual void setName(string n){
            //     // this->_name=n;
            // }

            // virtual void setGame(Game g){
            //     // this->_game=g;
            // }
          
            // virtual void setCoins(int c){
            //     // this->_coins=c;
            // }

            int coins();
                // return this->_coins;
            //     return 1;
            // }

            virtual void updateCoins(int u);
                // int num = this->getCoins();
                // num=num+u;
                // setCoins(num);
            

           
            string getName();
                // return this->_name;
                // return "string";
            

            virtual int getCoins();

            // virtual Game getGame(){
            //     // return this->_game;
            //     Game g= Game();
            //     return g;
            // }


            void income();

            void foreign_aid();


            void block(Player p);

          

            
    };
}















