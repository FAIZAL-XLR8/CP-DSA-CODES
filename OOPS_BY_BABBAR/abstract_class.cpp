/*
abstraction hiding most thing show nexessary things hifing implementaion showing interface only
Abstarct classes 
the whole purpose is to differentiate the code into two parts interface and implementation interface stays the same implementaions changes
An abstract class is a class that contains at least one pure virtual function (= 0). It cannot be instantiated/cannot create objects of that class  and is used to define a common interface for related classes. The interface specifies what operations are available, while derived classes provide their own implementations of those operations. This separates interface from implementation, allowing implementations to change without affecting client code that depends only on the interface. Any non-abstract derived class must implement all inherited pure virtual functions.

*/
#include <bits/stdc++.h>
using namespace std;
class Bird{
    public :
    virtual void speak() = 0; //no function defination -->pure virtual func
    virtual void eat() = 0;
    virtual ~Bird(){cout << "bird destructor gets called \n"; } // virtual keyword important because both first derived class destructor gets called then base class destrictor. Without virtual on ~Bird():
//Only ~Bird() runs. ~Sparrow() is skipped entirely — so if Sparrow allocated any resources (memory, file handles), they leak.
};
class Sparrow : public Bird {
    void speak ()
    {
        cout << "it speaks" << endl;
    }
    void eat()
    {
        cout <<" sparrow eats";
    }
    ~Sparrow(){cout << "Sparrow destructor called" << endl;}
};
class Pigeon : public Bird {
    void speak ()
    {
        cout << " pigeon speaks" << endl;
    }
    void eat()
    {
        cout <<" pigeon  eats" << endl;
    }
    ~Pigeon(){cout << "pigeon destructor called" << endl;}
};
 void display( Bird* &temp)
    {
        temp -> eat();
        temp -> speak();
    }
int main ()
{
   
    Bird* t = new Sparrow();
    Bird* d = new Pigeon();
    display (t);
    display (d);
    delete t;
    delete d;
}