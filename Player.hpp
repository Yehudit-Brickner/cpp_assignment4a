#pragma once
#include <string>
#include <iostream>
#include <vector>
#include "Game.hpp"

using namespace std;

namespace coup {
    class Player {
        // private:
         public:
            int _coins;
            Game _game;
            string _name;
            string _role;

       
            //constructer
            Player(Game g, string n);
            

            // virtual void setName(string n){
            //     // this->_name=n;
            // }

            // virtual void setGame(Game g){
            //     // this->_game=g;
            // }
          
            // virtual void setCoins(int c){
            //     // this->_coins=c;
            // }

            int coins(){
                // return this->_coins;
                return 1;
            }

            virtual void updateCoins(int u){
                // int num = this->getCoins();
                // num=num+u;
                // setCoins(num);
            }

           
            

            virtual string getName(){
                // return this->_name;
                return "string";
            }

            virtual int getCoins(){
                // return this->_coins;
                return 1;
            }

            // virtual Game getGame(){
            //     // return this->_game;
            //     Game g= Game();
            //     return g;
            // }


            void income(){
                // updateCoins(1);
            }

            void foreign_aid(){
                // updateCoins(2);
            }


            void block(Player p){
                // will need a queue to hold the last full turns of things to know what to block and how to rool back
                cout<< "blocked"<<endl;
            }

          

            
    };
}















