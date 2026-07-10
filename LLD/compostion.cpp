#include <iostream>
using namespace std;
class A {

    public :
    void display()
    {
        cout << "A's object is there\n";
    }
};
class B {
    public :
    A* a;
    B ()
    {
        a = new A(); 
    }
    void print()
    {
        cout << "B's object is here \n";
    }
    ~B()
    {
        cout << "destructor of B was called \n";
        delete a;
    }
};
int main()
{
   B* b = new B();
    b -> a ->display(); //this is composition --> object b has a relationship with a
    delete b;
}