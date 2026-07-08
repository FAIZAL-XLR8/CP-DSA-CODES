// inheritance is used for --> genralistion(parent) : specilization(child) {any "is-a" reltnship me inhertiance aayega for instance car is a vehicle --> car - specilisation and vehicle = genralisation}
#include <bits/stdc++.h>
using namespace std;
class Vehicle{
    public : 
    int no_of_tyres;
    string name;
    protected :
    int* rupees;
    public :
    //copy constructor
    Vehicle(const Vehicle &src_obj)
    {
        this -> no_of_tyres = src_obj.no_of_tyres;
        this -> name = src_obj.name;
        this -> rupees = src_obj.rupees;
    }
    Vehicle(string name, int no_of_tyres, int rupees)
    {
        cout << "constructor of vehicle is being called" << endl;
        this -> name = name;
        this -> no_of_tyres = no_of_tyres;
        this -> rupees = new int(rupees); //dynamically allocate somne memory for this pointer
    }
};
class Car : public Vehicle{
    public:
    int mileage;
    int gears;
    Car(string name, int no_of_tyres, int rupees, int mileage, int gears) : Vehicle (name, no_of_tyres, rupees)
    {
        cout << "Constructor of Car is being called" << endl;
       // Since Car inherits from Vehicle, every Car object contains a Vehicle subobject and that subject's memory is allocated first. A subobject is simply an object that exists as a part of another object.
      // "The Vehicle(...) in the initializer list calls the base class constructor. Every Car object contains a Vehicle subobject, and C++ guarantees that the base class subobject is constructed before the derived class. The initializer list lets us specify which base constructor to invoke. Without it, the compiler tries to call the base class's default constructor, which causes an error if no default constructor exists."
      this -> mileage = mileage;
      this -> gears = gears;
    // 
    }
    void display ()
    {
        cout << this ->name <<" "<< this -> mileage << endl << *(this -> rupees);
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
    Car ford("Faizal", 4, 10, 6, 5);
    ford.display();
   

}