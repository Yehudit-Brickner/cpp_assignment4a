

#include "Player.hpp"
#include <iostream>
#include <stdexcept>
#include <string>


using namespace coup;

Game::Game(){
    std:: vector<coup::Player> _p;
    // _p.resize(0);  
    _turn =0;
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


// void Game::setTurn(int t){
//     cout<<"new turn="<< t<<endl;
//     int size=this->_p.size();
//     cout<< "size=" << size<<endl;
//     this->_turn=t%size;
// }


void coup::updateTurn(Game & g){
    // int t=this->_game._turn;
    // cout<<"t="<< t<< endl;
    int size=(int)g._p.size();
    // cout<< "size=" << size<<endl;
    // this->_game._turn=(t+1);
    // cout<<this->_game._turn<<endl;
    g._turn=(g._turn+1)%(int)g._p.size();
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
        unsigned long tu=(unsigned long)this->_turn;
        vector<string> p=this->players();
        return p[tu];        
    }

    string Game::winner(){
        if (this ->_p.size()==1){
            return this->_p[0].getName();
        }
        // else{
        //     //throw exception
        // }
        return "string";
    }