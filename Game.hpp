#pragma once
#include <vector>
#include "Player.hpp"

using namespace std;

namespace coup {
    class Game {
        

        public:
        std:: vector<Player> _p;
        int _turn;

        //constructer
        Game(){
          std:: vector<Player> _p;
          _p.resize(0);  
          _turn =-1;
        }

        void setTurn(int t){
            int size=this->_p.size();
            this->_turn=t%size;
        }


        // make a vector of the players name
        std::vector<string> players(){
            std:: vector<string> playerss;
            playerss.resize(this->_p.size());
            for (unsigned long i=0; i<this->_p.size();i++){
                playerss[i]=this->_p[i].getName();
            }
            return playerss;
        }

        string turn(){
            int t=this->_turn;
            setTurn(t+1);
            t=this->_turn;
            vector<string> p=this->players();
            return p[t];
        }

       

        


        

    };
}