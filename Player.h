#include <iostream>
#include <string>
#define PRINT(sent)\
 std::cout << sent << std::endl
#ifndef _PLAYER_H_
#define _PLAYER_H_

class Player{
private:
// attributes
std::string name;
int health;
int xp;
static int num_players;
public:
// methods
//Player();
//Player(std::string name_val);
//Player(std::string name_val, int health_val, int xp_val);
// DEFAULT VALUE CONSTRUCTOR
Player(std::string name_val="None", int health_val=0, int xp_val=0);
~Player();    
inline void set_name(std::string name_val){
    this->name = name_val;
}
inline std::string get_name() const {return this->name;}
inline int get_health() const {return this->health;}
inline int get_xp() const {return this->xp;}
inline void talk(std::string speech) const {std::cout << name <<" says: " << speech << std::endl;}
inline bool is_dead() const {return this->health > 0? 0 : 1 ; }
static int get_num_players();

// copy constructor
Player(const Player &source);

};

#endif