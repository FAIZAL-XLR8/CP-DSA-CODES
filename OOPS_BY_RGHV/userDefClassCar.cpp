#include <bits/stdc++.h>
using namespace std;
class Car { //Student is a new user defined data type
public:
// data members

int price ;
float cgpa;
string name;
};
void print (Car c) {
    cout << c.name << endl;
    cout << c.price << endl;
}
void changeByRef (Car& c) {
    c.name = "BMW";
}
void changeByValue (Car c) {
    c.name = "Mercedes";
}
void changeByRef2(Car* c) {
    c->name = "BMW";
}
int main () {
Car first;
first.name = "Supra";
first.price = 70;

Car second;
second.name = "Ferrari";
second.price = 71;

print(first);
print(second);
changeByRef(first);
changeByRef2(&second);
changeByValue(second);

print(first);
print(second);
// cout << second.name << endl;
// cout << first.name << endl;
}