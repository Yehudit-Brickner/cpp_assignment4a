
#pragma once
#include <string>
#include <iostream>
#include <vector>
#include "Game.hpp"

using namespace std;

namespace coup {
    class Game;
    class Player {
        public:
            int _coins;
            coup::Game _game;
            string _name;
            string _role;
        
            //constructers
            // Player(coup::Game g, string n);
            Player();
            
            int coins();
            void updateCoins(int u);
            string getName();
            int getCoins();
            virtual string role();
            void income();
            void foreign_aid(); 
            void coup(Player p);
            void block(Player p);
    };



    class Ambassador : public Player{

        public: 
            Ambassador(Game & g, string n);
                            
            // void income();
            // int coins();
            // void foreign_aid();
            // string role()override;
            // void block(Player p);
            // void coup(Player p);
            void transfer(coup::Player p1, coup::Player p2);
    
    };

    class Assassin : public Player{

        public:
            Assassin(Game & g, string n);
                
            // void income();
            // int coins();
            // void foreign_aid();
            // string role()override;
            // void coup(Player p);
    };

    class Captain : public Player{

        public:
            Captain(Game & g, string n);
               
            // void income();
            // int coins();
            // void foreign_aid();
            // string role()override;
            // void block(Player p);
            // void coup(Player p);
            void steal(coup::Player p);
    };

    class Contessa : public Player{

       public:
            Contessa(Game & g, string n);      

            // void income();
            // int coins();
            // void foreign_aid();
            // string role()override;
            // void coup(Player p);
            void block(coup::Assassin a);
            
    };

    class Duke : public Player {

        public:
            Duke(Game & g, string n);
        
            // void income();
            // int coins();
            // void foreign_aid();
            // string role()override;
            // void block(Player p);
            // void coup(Player p);
            void tax();
    };




    

}







