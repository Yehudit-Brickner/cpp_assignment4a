

#include "Player.hpp"
#include "Game.hpp"
#include <iostream>
#include <stdexcept>
#include <string>
#include <queue>

using namespace coup;

    Game::Game(){
        std:: vector<coup::Player*> _player;
        std:: vector<string> _p; 
        _turn = 0;
        // queue<Turn> gameTurns;
        
    }

    void Game::print(){
        for (unsigned long i=0; i<this->_p.size();i++){
            // cout<< this->_p[i].getName() << "  ";
            cout<< _p[i]<< "   "<< endl;
        }
        cout << " "<<endl;
    }



    void Game::addplayer(string const s){
        int const max_player=6;
        // _p.push_back(p);
        if(_p.size()<max_player){
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
        // this->print();
        // int t=this->_game._turn;
        // cout<<"t="<< t<< endl;
        // int size1=(int)this->_p.size();
        // cout<< "size of player name vector=" << size1<<endl;
        // int size2=(int)this->_player.size();
        // cout<< "size of player vector=" << size2<<endl;
        // this->_game._turn=(t+1);
        // cout<<this->_turn<<endl;
        
        this->_turn=(this->_turn+1)%(int)this->_player.size();
        
        unsigned long turnn= (unsigned long)this->_turn;
        int num=this->_player[turnn]->_state;
        while(num!=0){
            // if (this->_player[turnn]->_state==1){
            //     this->_player[turnn]->setState(2);
            // }
            this->_turn=(this->_turn+1)%(int)this->_player.size();
            turnn= (unsigned long)this->_turn;
            num=this->_player[turnn]->_state;
        }

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