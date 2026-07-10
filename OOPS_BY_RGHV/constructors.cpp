 #include <bits/stdc++.h>
 using namespace std;
 class Student {
    public :
     int roll;
     string name;

     //constructor
     // has to be the name with as of the data type
     Student (string str, int no) {
        name = str;
        roll = no; 
     }
     // default constructor
     Student (){}

     // multiple constructors 
     Student (int r, string s) {
        name = s;
        roll = r;
     }
 };
 void print(Student lad) {
   cout << lad.name << endl;
   cout << lad.roll << endl;
 }
 int main() {
    Student s1("Faizal", 70); // constructor call according to its parameters
    Student s3(70, "Ali"); // call acc to its order in parameters
    Student s2; // gives error if default constr not given
    
    s2.name = "Muhammad";
    s2.roll = 100;
    print(s1);
    print (s2);
    print (s3);
 }