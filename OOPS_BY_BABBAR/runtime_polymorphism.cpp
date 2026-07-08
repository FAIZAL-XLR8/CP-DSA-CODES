// also called late binding or runtime polymorphism --> this is implemented using the keyword virtual
//  if we use the keyword vitual on base class function --> jiska object banagea yaani right side of = jo object banega uska funct cll hoga

// if no virtual keyword used then left side me yaani container/user defined data type  jis type ka hai usska call hoga --> and that would be called as early binding

//every object of a derived class has suboject of the parent class and since every subobject is present in a derived class object so  a parent class pointer can contain a child class objct --> becuase a child has a part of parent
//eg class Animal is parent and child = dog and dog has attributes of parent so dog is also an animal hence animal ptr can contain dog --> Animal *ptr = new Dog(10); because animal is present is dog so it can point to dog but vice versa not true Dog* ptr = new Animal(10) --> error

// for a runtime polymorphism we need --> virtual keyword ovverriding function same function definations in base and subclass 
// a base class pointer which stores subclass object during runtime gets the adress of the objct because allocated in heap

// keyword final --> used at two plavces --> after a class defination class Shape final{}; --> so that no class can derive it/inherit it 
//2nd place after a virtual function --> so that no derived class function can ovverride it
#include <iostream>
using namespace std;
class Base
{
public:
    string name;
    Base(string name) : name(name) {};
     virtual void display()
    {
        cout << "base called" << endl;
    }
};
class Derived : public Base
{
public:
    Derived(string name) : Base(name) {};
    void display() 
    {
        cout << "derived called" << endl;
    }
};
class Derived2 : public Base{
    public : 
    Derived2(string name) : Base(name)
    {
        
    }
    void display() override
    {
        cout << "Derved 2 called" << endl;
    }
};
void print(Base* obj) 
{
    obj -> display();
}
int main ()
{
    Base* base_ptr;
    Derived child("goons");
    base_ptr = &child; // this is called upcasting we stored child's object is a pointer of parent's class
    base_ptr -> display();
    print(&child);
    Derived2 temp ("ali");
    print(&temp);
}