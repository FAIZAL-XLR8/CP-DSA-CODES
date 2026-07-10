#include <bits/stdc++.h>
using namespace std;
class Student {
    public:
    string name;
    int roll;
    float cg;

    // constructors
    // default
    Student (){}
    // parameterised
    Student (string name, int roll, float cg) {
        this ->cg = cg;
        this -> roll = roll;
        this -> name = name;
    }
};
int main () {
    Student s1 ("Faizal", 70, 8.0);
    // now creating an object's pointer
    Student* ptr = &s1; // Static Memory Allocation
    
    // char *ptr1 = "NEXT";  // Sort Of Dynamic Memory Allocation
    // char check = 'N';
    // cout << (int)check <<" " << (*ptr1 + 1); output 77 78

    // real Dynamic memry Alloction
    int *ptr2 = new int(479479); // stored in runtime nd in heap
    cout << ptr2 <<" " << *ptr2 << endl;


}
