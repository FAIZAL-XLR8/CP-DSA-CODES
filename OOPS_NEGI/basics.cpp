#include <bits/stdc++.h>
using namespace std;
class Student {


    private : 
    int roll;
    string name;
    string grade;
    public :
    void setName (string name)
    {
        this -> name = name;
    }
    void getName ()
    {
        cout << this->name;
    }
};
int main ()
{
    Student s1;
    s1.setName("Faizal");
    s1.getName();
    Student *s2 = new Student(); //dynamic memmory allocation stored in heap at run time
    s2 ->setName("ALi");
    s2 -> getName();
}