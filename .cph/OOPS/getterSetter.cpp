#include <bits/stdc++.h> 
using namespace std;
class Learn {
private :
int score;
int health;
public :
void setScore (int s) {
    score = s;
}
void setHealth (int hl) {
    health = hl;
}
int getScore () {
    return score;
}
int getHealth () {
    return health;
}   
};
int main () {
    Learn Faizal;
    
Faizal.setHealth (100);
Faizal.setScore (1);
cout << Faizal.getScore () << endl;
cout << Faizal.getHealth() << endl;
}
