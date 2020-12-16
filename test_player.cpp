#include <iostream>
#include <vector>
#include <string>
#include "Player.h"
using namespace std;

void display_player(Player player){
    std::cout << "Player name: " << player.get_name() << std::endl;
    std::cout << "Player  health: " << player.get_health() << std::endl;
    std::cout << "Player xp: " << player.get_xp() << std::endl;
}

int main(){
//    {
//    Player slayer;
//    slayer.set_name("Slayer");
//    slayer.get_name();
//    }
//    
//    {
//        Player frank {"Frank"};
//        frank.set_name("Frank");
//        Player hero;
//        hero.set_name("Hero");
//        Player villain{"Villain", 1000, 5000};
//        villain.set_name("Villain");
//    }
//    
//    {
//        Player *enemy = new Player{"Enemy", 10, 0};
//        enemy->set_name("Enemy");
//        enemy->talk("Kill the hero!!!");
//        delete enemy;
//    }
    
//    Player frank;
//    frank.set_name("Frank");
//    cout << frank.get_name() << endl;
//    
//    Player herm ("Herm", 100, 50);
//    herm.talk("Hi there...");

Player empty;
Player frank{"Frank"};
Player villain{"Villain", 100, 55}; 
PRINT(frank.get_num_players());   
Player copy{empty};

PRINT(villain.get_num_players());
Player *copy2 = new Player {villain};

display_player(villain);
PRINT(villain.get_num_players());
display_player(*copy2);
delete copy2;

PRINT(villain.get_num_players());
    return 0;
}