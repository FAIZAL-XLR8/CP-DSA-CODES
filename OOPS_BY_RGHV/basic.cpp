#include <bits/stdc++.h>
using namespace std;
class Student { //Student is a new user defined data type
public:
// data members

int roll;
float cgpa;
string name;
};
int main () {
Student first;
first.name = "Faizal";
first.roll = 70;
first.cgpa = 8.0;

Student second;
second.name = "Ali";
second.roll = 71;
second.cgpa = 7.8;

cout << second.name << endl;
cout << first.name << endl;
}