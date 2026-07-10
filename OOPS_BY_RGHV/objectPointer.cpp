#include <bits/stdc++.h>
using namespace std;
class Student {
    public:
    string name;
    int roll;
    float cg;

    // constructors
    // default
    Student (){
        this -> name = " Faizl"; 
    }
    // parameterised
    Student (string name, int roll, float cg) {
        this ->cg = cg;
        this -> roll = roll;
        this -> name = name;
    }
};
int main () {
    //Student s1 ("Faizal", 70, 8.0);
    // now creating an object's pointer
    Student* st = new Student (); // default constrctor used here
    Student* ptr = new Student("Faizal", 70, 8.0); // initialisation thru constructor
    // accessing objcts attributes thru ptrs via
    //dereferrncing in brackets with dot to access attribute
    cout << (*ptr).cg << " " << (*ptr).name << endl;

    //modifying atytributes of objcts
    (*ptr). name = "Ali";
    cout << (*ptr). name << endl;

    //(*ptr) can be wrttn as ptr -> 
    ptr -> roll = 255;
    cout << ptr -> roll << endl;
    char *ptr1 = "NEXT";  // SORT OF DYNAM
    char check = 'N';
    cout << (int)check <<" " << (*ptr1 + 1);
    cout << st -> name;


}
