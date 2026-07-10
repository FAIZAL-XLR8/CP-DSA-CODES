#include <iostream>
using namespace std;
class Gun {
    public:
int ammo;
int scope;
int damage;
};
class Player { // main class
private :
int score;
int health; //data member 
Gun gun; // object of class Gun is one of the data members of class Player basically
// is the part of the whole blueprint of class Player
class Helmet {
    private :
    int health;
    int level;
    public :
void setLevel (int level) {
    this -> level = level;
}
void setHealth (int health) {
    this -> health = health;
}
int getLevel () {
    return level;
}
int getHealth() {
    return health;
}
};
Helmet helmet; // data member of the clAss Player
public :

void setHealth (int health){
    // basically we are initialising the data members with the value that is stored in 
    // the variable health in the parameters
this -> health = health; // we are the setting the value of Player class data member health
//as the value that we will be getting through function call 
}
void setScore (int score) {
    this -> score = score; 
}
int getHealth() {
    return health;
}
int getScore () {
    return score;
}

void setGun (Gun gunType) {
    this -> gun = gunType;
}
Gun getGun () {
    return gun;
}
void setHelmet (int level) {
    Helmet *helmet = new Helmet;
    int health = 0;
    if (level == 1) health = 20;
    else if (level == 2) health = 50;
    else if (level == 3) health = 100;
    helmet ->setHealth(health);
    helmet -> setLevel (level);
    this -> helmet = *helmet;
    // this -> helmet. setLevel(level);
}
void getHelmet() {
    cout << helmet.getHealth() << endl;
    cout << helmet.getLevel () << endl;

}
};

int main() {
int a = 10; // this is stored in the stack memory (compile time wale chiz stored in stack)
            //essi ko static memory allocation kehte
int*  ptr = new int (10) ; // stored in heap memory (runtime wale chiz stored in heap)
                            // essi ko dynamic memory allocation kehte
                            //adrress of runtime memory allocated stuffs varies 

cout << &a << endl << ptr << "\n" ;
Player first; // statically stored means stack me stored
Player *unknown = new Player;
//Objects created with new live on the heap, and we interact with them through pointers.// Object created on heap
 // unknwn is a pointer to new object that got created in heap, its stored dynamically 
                            // at run time
Player unknownObject = *unknown;//Copies the heap object into unknownObject,
// which is now a stack object.
 // stores the value of the new object in object to pointer unknown
unknownObject.setHealth(29);
unknownObject.setScore (222); // changes made reflcts on stack memory and is a copy
unknown -> setScore(1999); // changes by reference yaani heap wala change hua
cout << unknownObject.getScore() << endl;
cout << unknownObject.getHealth() << endl;
cout << unknown -> getScore() << endl;
(*unknown).setScore (33);
cout << (*unknown).getScore() << endl;
unknown -> setHealth(77);
cout << unknown -> getHealth() << endl;
Gun akm;
akm.damage = 100;
akm.scope = 4;
akm.ammo = 99;
unknown -> setGun(akm);
Gun awm;
awm.scope = 8;
awm.ammo = 5;
awm.damage = 100;
first.setGun(awm);
first.setHelmet(2);
unknown -> setHelmet(1);

cout << first.getGun().ammo << endl;
// check the gun
Gun checkOfFirst = first.getGun ();
cout << checkOfFirst.ammo << endl; // output = 5 since awm diye the
first.getHelmet();

}