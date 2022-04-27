
#include "doctest.h"
#include "Player.hpp"
#include "Assassin.hpp"
#include "Ambassador.hpp"
#include "Captain.hpp"
#include "Contessa.hpp"
#include "Duke.hpp"

#include <string>
#include <vector>

using namespace coup;

    Game g1{};

    Duke duke{g1, "player1"};
	Assassin assassin{g1, "player2"};
	Ambassador ambassador{g1, "player3"};
	Captain captain1{g1, "player4"};
	Contessa contessa{g1, "player5"};
    Captain captain2{g1, "player6"};

   

    
    // start game

    TEST_CASE("game 1"){
        
        
        g1.print();
        
        
        vector<string> p1 ={"player1", "player2","player3", "player4","player5", "player6"};
        vector<string> players1 = g1.players();
        for (unsigned long i=0; i<p1.size();i++){
            CHECK(p1[i]==players1[i]);
        }


        


        //round 1
        //all players take income
        CHECK_NOTHROW( duke.income()); //1
        CHECK_NOTHROW( assassin.income());  //1
        CHECK_NOTHROW( ambassador.income());  //1
        CHECK_NOTHROW( captain1.income()); //1
        CHECK_NOTHROW( contessa.income()); //1
        CHECK_NOTHROW( captain2.income()); //1
     


        //check everyones income
        cout<<"\ncheck money"<<endl;
        CHECK(duke.coins()==1);
        CHECK(assassin.coins()==1);
        CHECK(ambassador.coins()==1);
        CHECK(captain1.coins()==1);
        CHECK(contessa.coins()==1);
        CHECK(captain2.coins()==1);
        cout<<"end check money\n"<<endl;


        //round 2
        // players take income, forign_aid or tax
        // in this roud each player wil try to do a function they cant pay for
        CHECK_THROWS(duke.coup(captain1));
        CHECK_NOTHROW( duke.tax()); //4
        CHECK_THROWS(assassin.coup(captain1));
        CHECK_NOTHROW( assassin.foreign_aid());  //3
        CHECK_THROWS(ambassador.coup(captain1));
        CHECK_NOTHROW( ambassador.income());  //2
        CHECK_THROWS(captain1.coup(captain2));
        CHECK_NOTHROW( captain1.income()); //2
        CHECK_THROWS(contessa.coup(captain1));
        CHECK_NOTHROW( contessa.income()); //2
        CHECK_THROWS(captain2.coup(captain1));
        CHECK_NOTHROW( captain2.foreign_aid()); //3
        

        //check everyones income
        cout<<"\ncheck money"<<endl;
        CHECK(duke.coins()==4);
        CHECK(assassin.coins()==3);
        CHECK(ambassador.coins()==2);
        CHECK(captain1.coins()==2);
        CHECK(contessa.coins()==2);
        CHECK(captain2.coins()==3);
        cout<<"end check money\n"<<endl;


        //playing out of turn
        // CHECK_THROWS(assassin.income());
        // CHECK_THROWS(ambassador.income());
        // CHECK_THROWS(captain2.income());
        // CHECK_THROWS(contessa.income());
        // CHECK_THROWS(captain1.income());


        //round 3
        // players take tax or forign_aid, the assasin tries to kill captain2, contessa blockes.
        // duke blocks captain2 from taking forign_aid
        CHECK_NOTHROW( duke.tax()); //7
        CHECK_NOTHROW( assassin.coup(captain2));  //0
        CHECK_NOTHROW( contessa.block(assassin)); // this is not the turn
        CHECK_NOTHROW( ambassador.foreign_aid());  //4
        CHECK_NOTHROW( captain1.foreign_aid()); //4
        CHECK_NOTHROW( contessa.foreign_aid()); //4
        CHECK_NOTHROW( captain2.foreign_aid()); //3
        CHECK_NOTHROW( duke.block(captain2)); // this is not a turn
      

       //check everyones income
        cout<<"\ncheck money"<<endl;
        CHECK(duke.coins()==7);
        CHECK(assassin.coins()==0);
        CHECK(ambassador.coins()==4);
        CHECK(captain1.coins()==4);
        CHECK(contessa.coins()==4);
        CHECK(captain2.coins()==3);
        cout<<"end check money\n"<<endl;

        //check everyines role
        cout<<"\ncheck role"<<endl;
        CHECK(duke.role()=="player1");
        CHECK(assassin.role()=="player2");
        CHECK(ambassador.role()=="player3");
        CHECK(captain1.role()=="player4");
        CHECK(contessa.role()=="player5");
        CHECK(captain2.role()=="player6");
        cout<<"end check role\n"<<endl;
      

        
        //round 4
        // players take forign_aid or tax, the ambassador transfors 1 coin from captain1 to contessa
        CHECK_NOTHROW( duke.tax()); //10
        CHECK_NOTHROW( assassin.foreign_aid());  //0
        CHECK_NOTHROW( duke.block(assassin)); // this is not a turn
        CHECK_NOTHROW( ambassador.transfer(captain1,contessa));  //4
        CHECK_NOTHROW( captain1.foreign_aid()); //5
        CHECK_NOTHROW( contessa.foreign_aid()); //7
        CHECK_NOTHROW( captain2.foreign_aid()); //5
       


        //round 5
        // the duke has to assasin- he will assaisn the assain.
        // everyone else takes forign_aid
        CHECK_NOTHROW( duke.coup(assassin)); //3
        CHECK_NOTHROW( assassin.foreign_aid());  //2
        CHECK_NOTHROW( ambassador.income());  // 5
        CHECK_NOTHROW( captain1.foreign_aid()); //7
        CHECK_NOTHROW( contessa.foreign_aid()); //9
        CHECK_NOTHROW( captain2.foreign_aid()); //7
        // the assasin was not saved he is out if the game
        
        // vector<string> p2 ={"player1","player3", "player4","player5", "player6"};
        // vector<string> players2 = g1.players();
        // for (unsigned long i=0; i<p2.size();i++){
        //     CHECK(p2[i]==players2[i]);
        // }
       

        // round 6
        // captain1 tries to assasin the ambasador the contessa blocks.
        // the ambassador takes forign aid 
        // the contessa assisnes the duke.
        // captain2 steals from the ambassador
        CHECK_NOTHROW( duke.tax()); // dead
        CHECK_NOTHROW( ambassador.foreign_aid());  // dead
        CHECK_NOTHROW( captain1.coup(ambassador)); // dead
        CHECK_NOTHROW( contessa.coup(duke)); //2
        CHECK_NOTHROW( captain2.steal(captain1)); //2
        // the duke was not saved he is out if the game
       
        // vector<string> p3 ={"player5", "player6"};
        // vector<string> players3 = g1.players();
        // for (unsigned long i=0; i<p3.size();i++){
        //     CHECK(p3[i]==players3[i]);
        // }
       

        // round 7
        CHECK_NOTHROW( contessa.income()); //1
        CHECK_NOTHROW( captain2.steal(contessa)); //4
        
        
        
        // round 8
        CHECK_NOTHROW( contessa.income()); //0
        CHECK_NOTHROW( captain2.steal(contessa)); //6
     
        
       
        // round 9
        CHECK_NOTHROW( contessa.income()); //1
        CHECK_NOTHROW( captain2.foreign_aid()); //8
        
        
        
        // round 9
        CHECK_NOTHROW( contessa.foreign_aid()); //dead
        CHECK_NOTHROW( captain2.coup(contessa)); //1
       
        CHECK(g1.winner()=="player5");



  

     }

    
