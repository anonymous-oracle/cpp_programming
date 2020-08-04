#include <iostream>
#include <string>
#ifndef _PLAYER_H_
#define _PLAYER_H_

class Player{
private:
// attributes
std::string name;
int health;
int xp;
public:
// methods
Player();
Player(std::string name);
Player(std::string name, int health, int xp);
~Player();

inline void talk(std::string speech) {std::cout << name <<" says: " << speech << std::endl;}
inline bool is_dead() {return this->health > 0? 0 : 1 ; }
};

#endif