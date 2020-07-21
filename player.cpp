#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Player{

// attributes
string name;
int health;
int xp;

// methods
void talk(string speech);
bool is_dead();
};






















int main(int argc, char const *argv[])
{
    Player frank, hero;
    Player *enemy;
    enemy = new Player;
    Player players[] {frank, hero};
    vector <Player> player_vec {frank, hero, *enemy};
    player_vec.push_back(Player());
    cout << player_vec.size() << endl;
    delete enemy;
    return 0;
}

