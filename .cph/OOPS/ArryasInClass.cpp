#include <bits/stdc++.h>
using namespace std;
class Student {
    public :
    int roll;
    string name;
};
class FunctionCall {
    public :
    int Leetcode;
   
    void display () { // member functions can access data members without any constraint 
                     // of being public or private
        cout << Leetcode;
    }

};
class Calculator {
private :
int a;
int b;
public:
void add () {
    cout << a + b << endl;
}
void subtract () {
    cout << a - b << "\n"; 
}
};

int main () {
    Student Faizal; // declaration of object Faizal of class Student
    Student Ali;
    Student Muhammad;
Student class2 [10];
FunctionCall part1;
part1.Leetcode = 92;
part1.display();
Calculator calci;
calci.add (); // gives junk
calci.subtract (); // gives junk

class2[1] = Faizal;
class2[0] = Ali;
class2[3] = Muhammad;
}