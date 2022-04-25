

#include "Player.hpp"
#include <iostream>
#include <stdexcept>
#include <string>


using namespace coup;

Game::Game(){
    std:: vector<coup::Player> _p;
    // _p.resize(0);  
    _turn =-1;
}

void Game::print(){
    for (unsigned long i=0; i<this->_p.size();i++){
        cout<< this->_p[i].getName() << "  ";
    }
    cout << " "<<endl;
}



void Game::addplayer(coup::Player p){
    _p.push_back(p);
}


void Game::setTurn(int t){
    int size=this->_p.size();
    this->_turn=t%size;
}


 // make a vector of the players name
    std::vector<string> Game::players(){
        std:: vector<string> playerss;
        playerss.resize(this->_p.size());
        for (unsigned long i=0; i<this->_p.size();i++){
            playerss[i]=this->_p[i].getName();
        }
        return playerss;
    }

    string Game::turn(){
        int t=this->_turn;
        setTurn(t+1);
        unsigned long tu=(unsigned long)(this)->_turn;
        vector<string> p=this->players();
        return p[tu];
        return "string";
    }

    string Game::winner(){
        // if (this ->_p.size()==1){
        //     return this->_p[0].getName();
        // }
        // else{
        //     //throw exception
        // }
        return "string";
    }