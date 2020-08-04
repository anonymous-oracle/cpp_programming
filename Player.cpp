#include <iostream>
#include <vector>
#include <string>
#include "Player.h"


int Player::num_players {0};
//Player::Player(): name{"None"}, health{0}, xp{0}
//{
//    std::cout << "\n*************no args constructor called for "<<this->name<<"*************"<< std::endl;
//}
////
//Player::Player(std::string name_val): name{name_val}, health{0}, xp{0}
//{
//    std::cout << "\n*************single args constructor called for "<<this->name<<"*************"<<std::endl;
//}
//
//Player::Player( std::string name_val, int health_val, int xp_val): name{name_val}, health{health_val}, xp{xp_val}
//{
//     std::cout << "\n**************three args constructor called for "<<this->name<<"*************" << std::endl;
//}



// DELEGATING CONSTRUCTORS


//Method I

//Player::Player( std::string name_val, int health_val, int xp_val): name{name_val}, health{health_val}, xp{xp_val}
//{
//     std::cout << "\n**************three args constructor called for "<<this->name<<"*************" << std::endl;
//}
//
//Player::Player()
//{
//    Player("None", 0, 0);
//    std::cout << "\n*************no args constructor called for "<<this->name<<"*************"<< std::endl;
//}
////
//Player::Player(std::string name_val)
//{
//    Player(name_val, 0, 0);
//    std::cout << "\n*************single args constructor called for "<<this->name<<"*************"<<std::endl;
//}

//Method II
//Player::Player( std::string name_val, int health_val, int xp_val): name{name_val}, health{health_val}, xp{xp_val}
//{
//     std::cout << "\n**************three args constructor called for "<<this->name<<"*************" << std::endl;
//}
Player::Player( std::string name_val, int health_val, int xp_val): name{name_val}, health{health_val}, xp{xp_val}
{
    num_players++;
     std::cout << "\n**************default value constructor called for "<<this->name<<"*************" << std::endl;
}


//Player::Player(): Player{"None", 0, 0}
//{
//    
//    std::cout << "\n*************no args constructor called for "<<this->name<<"*************"<< std::endl;
//}
////
//Player::Player(std::string name_val): Player{name_val, 0, 0}
//{
//    std::cout << "\n*************single args constructor called for "<<this->name<<"*************"<<std::endl;
//}

Player::Player(const Player &source) : name{source.name}, health{source.health}, xp{source.xp}{
    std::cout << "Copy constructor called; made a copy of " << source.name << std::endl;
}
Player::~Player(){std::cout << "destructor called for " << this->name << std::endl; num_players--;}

int Player::get_num_players(){
    return num_players;
}