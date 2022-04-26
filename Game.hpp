
#pragma once
#include "Player.hpp"
#include <vector>
#include <string>
#include <iostream>



using namespace std;

namespace coup {
    class Player;
   
    class Game {
        

        public:
        std:: vector<coup::Player> _p;
        int _turn;

        //constructer
        Game();
        ~Game(){}
       
        void addplayer(coup::Player p);

        void print();

        // void setTurn(int t);

        void updateTurn();      

        // make a vector of the players name
        std::vector<string> players();

        // return whos turn it is
        string turn();

        // return the winners name
        string winner();


    };
}
