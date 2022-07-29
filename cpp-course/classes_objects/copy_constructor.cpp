#include <iostream>

using namespace std;

class Player {
public:
    string name;
    int health;
    Player(string name, int health = 100): name(name), health(health) {}
    Player(const Player& player) : name(player.name), health(player.health) {
        cout << "copy constructor" << endl;
    }
    ~Player() {
        cout << "destructor" << endl;
    }
};

void print(Player player){
    cout << player.name << " [" << player.health << "%]" << endl;
}

int main() {
    Player p{"Monster"};
    print(p);
    return 0;
}