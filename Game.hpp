
#pragma once
#include "Player.hpp"
#include <vector>
#include <string>
#include <iostream>



using namespace std;


    class Game {
        

        public:
        std:: vector<coup::Player> _p;
        int _turn;

        //constructer
        Game(){
        //   std:: vector<Player> _p;
        //   _p.resize(0);  
        //   _turn =-1;
        }

        void addplayer(coup::Player p){
            // _p.push_back(p);
        }


        void setTurn(int t){
            // int size=this->_p.size();
            // this->_turn=t%size;
        }


        // make a vector of the players name
        std::vector<string> players(){
            std:: vector<string> playerss;
            // playerss.resize(this->_p.size());
            // for (unsigned long i=0; i<this->_p.size();i++){
            //     playerss[i]=this->_p[i].getName();
            // }
            return playerss;
        }

        string turn(){
            // int t=this->_turn;
            // setTurn(t+1);
            // unsigned long tu=(unsigned long)(this)->_turn;
            // vector<string> p=this->players();
            // return p[tu];
            return "string";
        }

        Player winner(){
            if (this ->_p.size()==1){
                return this->_p[0];
            }
            else{
                //throw exception
            }

    };
