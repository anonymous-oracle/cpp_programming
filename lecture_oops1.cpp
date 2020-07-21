#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Player{
public:
// attributes
string name;
int health;
int xp;

// methods
void talk(string speech) {cout << name <<" says: " << speech << endl;}
bool is_dead() {return this->health > 0? 0 : 1 ; }
};


class Account{
    public:
    // attributes
   string name;
   double balance;
   
   // methods
   bool withdraw(double amt);
   bool deposit(double amt);
};



















int main(int argc, char const *argv[])
{
    Player frank, hero;
    Player *enemy;
    enemy = new Player;
    frank.health = 100;
    frank.xp = 1000;
    frank.talk("my name is frank!");
    if (frank.is_dead()){cout << "frank is dead"<<endl;}
    else {cout << "frank is alive"<<endl;}
    Player players[] {frank, hero};
    vector <Player> player_vec {frank, hero, *enemy};
    player_vec.push_back(Player());
    cout << player_vec.size() << endl;
    delete enemy;
    return 0;
}

