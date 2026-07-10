#include <bits/stdc++.h>
using namespace std;
class Player { // this is a blueprint
              // No memory assigned ro it yet in the RAM;
    public :
    int health; 
    int score;
    string name;
    private : // cant be accessed outside the class
    int kills;

};

int main () {
Player faizal;
faizal.health = 100;
faizal.name = "Grim Imperium";
Player Ali;
Ali.health = 100;
Ali.name = "Ali Faiz";
// Ali.kills = 101;  (gives error since its private) 
cout << faizal.health << endl;
cout << faizal.name << "\n";
cout << Ali.health <<"\n";
cout << Ali.name << " \n";
// gives error since its private cout << Ali.kills;
}