#include <bits/stdc++.h>
using namespace std;
//following are the interfaces
class Projectable{
    public :
    virtual void project() = 0;
    virtual ~Projectable() = default;
};
class Walkable{
    public :
    virtual void walk() = 0;
    virtual ~Walkable() = default;
};
class Flyable {
    public :
    virtual void fly() = 0;
    virtual ~Flyable() = default;
};

class Talkable{
    public:
    virtual void talk() = 0;
    virtual ~Talkable() = default;

};
class NormalWalk : public Walkable{
    public :
    void walk() override {
        cout << "Normal Walk showing \n";

    }
};
class NoWalk : public Walkable {
    public :
    void walk() override
    {
        cout << "No walk showing\n";
    }
};

class NormalFly : public Flyable{
    public :
     void fly() override
    {
        cout <<" normal fly showing\n";
    }
};
class NoFly : public Flyable {
    public :
    void fly() override
    {
        cout << "No fly showing\n";
    }
};


class NormalTalk : public Talkable{
    public :
     void talk() override
    {
        cout <<" normal Talk showing\n";
    }
};
class NoTalk : public Talkable {
    public :
    void talk() override
    {
        cout << "No talk showing\n";
    }
};
class SuspicousProjection : public Projectable{
    public :
    void project()
    {
        cout << "suspicous projection\n";
    }
};
class NormalProjection : public Projectable{
    public :
    void project() override {
        cout << "normal projection \n";
    }
};

class Robot {
    public :
    Talkable* t;
    Walkable* w;
    Projectable* pr;
    Flyable* f;
    Robot(Talkable* t,  Walkable* w, Projectable* pr, Flyable* f) : t(t), w(w), pr(pr), f(f){};
    void walk()
    {
        w->walk();
    }
    void talk()
    {
        t -> talk();
    }
    void project()
    {
        pr -> project();
    }
    void fly()
    {
        f->fly();
    }
};
int main()
{
    NormalFly* ff = new NormalFly();
    NoTalk* nt = new NoTalk();
    SuspicousProjection* sp = new SuspicousProjection();
    Walkable* wk = new NormalWalk();
    Robot* rb = new Robot(nt, wk, sp, ff);
    rb->walk();
    rb->fly();
    rb->project();
    rb->talk();
}