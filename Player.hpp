#pragma once
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
            Game _game;
            string _name;

        
            //constructer
            Player(Game g, string n){
                setGame(g);
                setName(n);
                setCoins(0);
            }



            void setName(string n){
                this->_name=n;
            }

            void setGame(Game g){
                this->_game=g;
            }
          
            void setCoins(int c){
                this->_coins=c;
            }

            int coins(){
                return this->_coins;
            }

            void updateCoins(int u){
                int num = this->getCoins();
                num=num+u;
                setCoins(num);
            }

           
            

            string getName(){
                return this->_name;
            }

            int getCoins(){
                return this->_coins;
            }

            Game getGame(){
                return this->_game;
            }


            void income(){
                updateCoins(1);
            }

            void foreign_aid(){
                updateCoins(2);
            }


            void block(Player p){
                // will need a queue to hold the last full turns of things to know what to block and how to rool back
                cout<< "blocked"<<endl;
            }



            
    };
}