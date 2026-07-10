#include <bits/stdc++.h>
using namespace std;
class Player {
    private :
    int health;
    int score;
    bool alive;

    public :
    void setScore (int score) {
        this -> score = score;
    }
    void setHealth (int health) {
        this -> health = health;
    }
    void setIsAlive (bool alive) {
        this -> alive = alive;
    }
    int getHealth () {
        return health;
    }
    
    
};
int add (Player a, Player b) {
    return a.getHealth() + b.getHealth();
}
Player greaterValue (Player a, Player b) {
    if (a.getHealth() > b.getHealth()) return a;
    else return b;
}
int main () {
Player first, second;
first.setHealth(100);
second.setHealth(22);
Player third = greaterValue(first, second);
cout << third.getHealth() << endl;
cout << add (first, second);
}