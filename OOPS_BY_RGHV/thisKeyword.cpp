#include <bits/stdc++.h>
using namespace std;
class Cricketer {
    public :
    string name;
    int runs;

    // constructor
    Cricketer(string name, int runs) {
        // name = name gives garbage value
        // since name of any object stays uninitialised coz name 
        // lhs and rhs side refers to the same name i.e localised variable name of constructor
        
        this -> name = name; // nw this operator points at the name of the object's attribute
        this -> runs = runs;
    }
    // creating function inside the class
    void print () {
        cout << this -> name << " " << this-> runs << endl;
    }
    int matches () {
        cout << ( this -> runs / 11);
    }
};
int main () {
    Cricketer player1("ABD", 899999);
    player1.print(); // function call (call of the func inside the class)
    player1.matches();
    // cout << player1.name << " " << player1.runs << endl;
}