// inheritance is used for --> genralistion(parent) : specilization(child) {any "is-a" reltnship me inhertiance aayega for instance car is a vehicle --> car - specilisation and vehicle = genralisation}
#include <bits/stdc++.h>
using namespace std;
class Vehicle{
    public : 
    int age;
    string name;
    private :
    int* gpa;
    public :
    Vehicle(const Vehicle &src_obj)
    {
        this -> age = src_obj.age;
        this -> name = src_obj.name;
        this -> gpa = src_obj.gpa;
    }
    Vehicle()
    {}
};
class Car : protected Vehicle{
    public:
    void display ()
    {
        cout << this ->name <<" "<<this -> age ;
    }
    //setter 
    void setName(string name)
    {
        this -> name = name;
    }
    //getter 
    void getName ()
    {
        cout << this -> name;
    }
    
};
//if we inherit a class as public --> public mem of parent class stays public and protected stays protected private inaccesibble
// inherit it as protected --> public = protetced ban jayega and protected stays protected and provate stays private
//inherit it as private --> everything beomes provate
// class Child : (inherit parent as) Parent
int main()
{
    Car ford;
    ford.setName ("faizal"); 
    ford.getName();

}