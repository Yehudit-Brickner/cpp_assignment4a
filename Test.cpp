
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

    // TEST_CASE("game 1"){


    //     vector<string> p1 ={"player1", "player2","player3", "player4","player5", "player6"};
    //     vector<string> players1 = g1.players();
    //     for (unsigned long i=0; i<p1.size();i++){
    //         CHECK(p1[i]==players1[i]);
    //     }

    //     // round 1
    //     //all players take income
    //     CHECK_NOTHROW( duke.income()); //1
    //     CHECK_NOTHROW( assassin.income());  //1
    //     CHECK_NOTHROW( ambassador.income());  //1
    //     CHECK_NOTHROW( captain1.income()); //1
    //     CHECK_NOTHROW( contessa.income()); //1
    //     CHECK_NOTHROW( captain2.income()); //1

    //     //round 2
    //     // players take income, forign_aid or tax
    //     CHECK_NOTHROW( duke.tax()); //4
    //     CHECK_NOTHROW( assassin.foreign_aid());  //3
    //     CHECK_NOTHROW( ambassador.income());  //2
    //     CHECK_NOTHROW( captain1.income()); //2
    //     CHECK_NOTHROW( contessa.income()); //2
    //     CHECK_NOTHROW( captain2.foreign_aid()); //3


    //     //round 3
    //     // players take tax or forign_aid, the assasin tries to kill captain2, contessa blockes.
    //     // duke blocks captain2 from taking forign_aid
    //     CHECK_NOTHROW( duke.tax()); //7
    //     CHECK_NOTHROW( assassin.coup(captin2));  //0
    //     CHECK_NOTHROW( contessa.block(assassin)); // this is not the turn
    //     CHECK_NOTHROW( ambassador.foreign_aid());  //4
    //     CHECK_NOTHROW( captain1.foreign_aid()); //4
    //     CHECK_NOTHROW( contessa.foreign_aid()); //4
    //     CHECK_NOTHROW( captain2.foreign_aid()); //3
    //     CHECK_NOTHROW( duke.block(captain2)); // this is not a turn

    //     //round 4
    //     // players take forign_aid or tax, the ambassador transfors 1 coin from captain1 to contessa
    //     CHECK_NOTHROW( duke.tax()); //10
    //     CHECK_NOTHROW( assassin.foreign_aid());  //0
    //     CHECK_NOTHROW( duke.block(assassin)); // this is not a turn
    //     CHECK_NOTHROW( ambassador.transfer(captain1,contessa));  //4
    //     CHECK_NOTHROW( captain1.foreign_aid()); //5
    //     CHECK_NOTHROW( contessa.foreign_aid()); //7
    //     CHECK_NOTHROW( captain2.foreign_aid()); //5

    //     //round 5
    //     // the duke has to assasin- he will assaisn the assain.
    //     // everyone else takes forign_aid
    //     CHECK_NOTHROW( duke.coup(assassin)); //3
    //     CHECK_NOTHROW( assassin.foreign_aid());  //2
    //     CHECK_NOTHROW( ambassador.income());  // 5
    //     CHECK_NOTHROW( captain1.foreign_aid()); //7
    //     CHECK_NOTHROW( contessa.foreign_aid()); //9
    //     CHECK_NOTHROW( captain2.foreign_aid()); //7
    //     // the assasin was not saved he is out if the game
    //     vector<string> p2 ={"player1","player3", "player4","player5", "player6"};
    //     vector<string> players2 = g1.players();
    //     for (unsigned long i=0; i<p2.size();i++){
    //         CHECK(p2[i]==players2[i]);
    //     }


    //     // round 6
    //     // captain1 tries to assasin the ambasador the contessa blocks.
    //     // the ambassador takes forign aid 
    //     // the contessa assisnes the duke.
    //     // captain2 steals from the ambassador
    //     CHECK_NOTHROW( duke.tax()); //6
    //     CHECK_NOTHROW( ambassador.foreign_aid());  //5
    //     CHECK_NOTHROW( captain1.coup(ambassador)); //0
    //     CHECK_NOTHROW( contessa.block(captain1)); // this is not a turn
    //     CHECK_NOTHROW( contessa.coup(duke)); //2
    //     CHECK_NOTHROW( captain2.steal(ambassador)); //9
    //     // the duke was not saved he is out if the game
    //     vector<string> p3 ={"player3", "player4","player5", "player6"};
    //     vector<string> players3 = g1.players();
    //     for (unsigned long i=0; i<p3.size();i++){
    //         CHECK(p3[i]==players3[i]);
    //     }


    //     //round 7
    //     // the ambassader transfers 1 coin fron captain2 to the contessa
    //     // captain1 tries to assisne the ambassador(cant pay) so he steal 2 coins from him
    //     // contessa takes froign_aid and captain 2 assasing captain1
    //     CHECK_NOTHROW( ambassador.transfer(captain2, contessa));  //3
    //     CHECK_THROWS( captain1.coup(ambassador)); // not a real turn- if is a real turn get rid if this line
    //     CHECK_NOTHROW( captain1.steal(ambassador)); //2
    //     CHECK_NOTHROW( contessa.foreign_aid()); //5
    //     CHECK_NOTHROW( captain2.coup(captain1)); //1
    //     // captain1 was no saved
    //     vector<string> p4 ={"player3","player5", "player6"};
    //     vector<string> players4 = g1.players();
    //     for (unsigned long i=0; i<p4.size();i++){
    //         CHECK(p4[i]==players4[i]);
    //     }

    //     CHECK_THROWS(g1.winner());

    //     //round 8
    //     // players take forign aid ir steal
    //     CHECK_NOTHROW( ambassador.foreign_aid());  //3
    //     CHECK_NOTHROW( contessa.foreign_aid()); //9
    //     CHECK_NOTHROW( captain2.steal(ambassador)); //3

    //     // round 9
    //     // players take forign aid ir steal
    //     CHECK_NOTHROW( ambassador.foreign_aid());  //3
    //     CHECK_NOTHROW( contessa.foreign_aid()); //11
    //     CHECK_NOTHROW( captain2.steal(ambassador)); //5

    //     // round 10
    //     // players take forign aid ir steal
    //     CHECK_NOTHROW( ambassador.foreign_aid());  //5
    //     CHECK_NOTHROW( contessa.coup(captain2)); //4
    //     // CHECK_NOTHROW( captain2.steal(ambassador)); // died
    //     vector<string> p5 ={"player3","player5"};
    //     vector<string> players5 = g1.players();
    //     for (unsigned long i=0; i<p5.size();i++){
    //         CHECK(p5[i]==players5[i]);
    //     }


    //     // round 11
    //     CHECK_NOTHROW( ambassador.foreign_aid());  //7
    //     CHECK_NOTHROW( contessa.foreign_aid()); //6

    //     //round 12
    //     CHECK_NOTHROW( ambassador.coup(contessa));  //7
    //     // CHECK_NOTHROW( contessa.foreign_aid());died
        
    //     CHECK(g1.winner()==ambassador);

    // }

    
