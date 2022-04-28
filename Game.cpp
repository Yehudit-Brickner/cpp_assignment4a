

#include "Player.hpp"
#include <iostream>
#include <stdexcept>
#include <string>


using namespace coup;

Game::Game(){
    std:: vector<coup::Player> _p;  
    _turn = 0;
    
}

void Game::print(){
    for (unsigned long i=0; i<this->_p.size();i++){
        // cout<< this->_p[i].getName() << "  ";
        cout<< _p[i]<< "   "<< endl;
    }
    cout << " "<<endl;
}



void Game::addplayer(string s){
    // _p.push_back(p);
    if(_p.size()<6){
        _p.push_back(s);
    }
    // throw std::invalid_argument( "too many players" ); 
}


// void Game::setTurn(int t){
//     cout<<"new turn="<< t<<endl;
//     int size=this->_p.size();
//     cout<< "size=" << size<<endl;
//     this->_turn=t%size;
// }


void Game::updateTurn(){
    // int t=this->_game._turn;
    // cout<<"t="<< t<< endl;
    // int size=(int)this->_p.size();
    // cout<< "size=" << size<<endl;
    // // this->_game._turn=(t+1);
    // // cout<<this->_game._turn<<endl;
    // this->_turn=(this->_turn+1)%(int)this->_p.size();
}


 // make a vector of the players name
    std::vector<string> Game::players(){
        // std:: vector<string> playerss;
        // playerss.resize(this->_p.size());
        // for (unsigned long i=0; i<this->_p.size();i++){
        //     playerss[i]=this->_p[i].getName();
        // }
        // return playerss;
        return this->_p;

    }

    string Game::turn(){
        int t=this->_turn;
        unsigned long tu=(unsigned long)this->_turn;
        vector<string> p=this->players();
        return p[tu];        
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