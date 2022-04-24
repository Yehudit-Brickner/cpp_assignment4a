
#pragma once
#include "Player.hpp"
#include <vector>
#include <string>
#include <iostream>



using namespace std;

namespace coup {

    class Game {
        

        public:
        std:: vector<coup::Player> _p;
        int _turn;

        //constructer
        Game();
       
        void addplayer(coup::Player p);

        void setTurn(int t);

        // make a vector of the players name
        std::vector<string> players();

        string turn();

        coup::Player winner();


    };
}
