#include <iostream>
#include <vector>
#include <string>
#include "Player.h"

Player::Player(){
    std::cout << "no args constructor called." << std::endl;
}

Player::Player(std::string name){
    std::cout << "single args constructor called." << std::endl;
}

Player::Player( std::string name, int health, int xp){
    // std::
}