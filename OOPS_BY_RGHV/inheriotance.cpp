#include <bits/stdc++.h>
using namespace std;
class Scooty {
    public :
    int topSpeed;
    float mileage;
    private :
    int bootspace;
};
class Bike : public Scooty { // read as class Bike extends scooty
    public :
    int gears;
};
int main () {
    Bike b1;
    b1.topSpeed = 111; // accesed data member of Scooty via public access specifier
    // b1.bootspace = 10; // error dega qki uh cant access private stuffs 
                    // members of scooty since public is the access specifier

}