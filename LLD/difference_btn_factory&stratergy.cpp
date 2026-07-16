// Factory → used when you need different objects (different concrete types), decided once, at creation time. Client ends up holding one of several possible types.
// Strategy → you already have your main object (e.g. Order, Car). It needs to perform some behavior, and that behavior has multiple possible implementations. You abstract that behavior into its own interface, write multiple concrete implementations of it, and the main object holds a pointer/reference to that abstraction as a member — swappable, even after the main object already exists.
robot //abstract class
{
    Pointers hona chahiye of behaviours to chnage at runtime
    //Dlyable*;
    //Swimmable*;
    robot
}
class Humaonid robot{
Humanoid(properites) : robot()
{

}
}
int main ()
{
    Robot/ClassName of main_existing object = new Robot_type(its properties sent)
}
#include <iostream>
using namespace std;

// --- Strategy Interface for Walk ---
class WalkableRobot {
public:
    virtual void walk() = 0;
    virtual ~WalkableRobot() {}
};

// --- Concrete Strategies for walk ---
class NormalWalk : public WalkableRobot {
public:
    void walk() override { 
        cout << "Walking normally..." << endl; 
    }
};

class NoWalk : public WalkableRobot {
public:
    void walk() override { 
        cout << "Cannot walk." << endl; 
    }
};


// --- Strategy Interface for Talk ---
class TalkableRobot {
public:
    virtual void talk() = 0;
    virtual ~TalkableRobot() {}
};

// --- Concrete Strategies for Talk ---
class NormalTalk : public TalkableRobot {
public:
    void talk() override { 
        cout << "Talking normally..." << endl; 
    }
};

class NoTalk : public TalkableRobot {
public:
    void talk() override { 
        cout << "Cannot talk." << endl; 
    }
};

// --- Strategy Interface for Fly ---
class FlyableRobot {
public:
    virtual void fly() = 0;
    virtual ~FlyableRobot() {}
};

class NormalFly : public FlyableRobot {
public:
    void fly() override { 
        cout << "Flying normally..." << endl; 
    }
};

class NoFly : public FlyableRobot {
public:
    void fly() override { 
        cout << "Cannot fly." << endl; 
    }
};

// --- Robot Base Class ---
class Robot {
protected:
    WalkableRobot* walkBehavior;
    TalkableRobot* talkBehavior;
    FlyableRobot* flyBehavior;

public:
    Robot(WalkableRobot* w, TalkableRobot* t, FlyableRobot* f) {
        this->walkBehavior = w;
        this->talkBehavior = t;
        this->flyBehavior = f;
    }
       
    void walk() { 
        walkBehavior->walk(); 
    }
    void talk() { 
        talkBehavior->talk(); 
    }
    void fly() { 
        flyBehavior->fly(); 
    }

    virtual void projection() = 0; // Abstract method for subclasses
};

// --- Concrete Robot Types ---
class CompanionRobot : public Robot {
public:
    CompanionRobot(WalkableRobot* w, TalkableRobot* t, FlyableRobot* f)
        : Robot(w, t, f) {}

    void projection() override {
        cout << "Displaying friendly companion features..." << endl;
    }
};

class WorkerRobot : public Robot {
public:
    WorkerRobot(WalkableRobot* w, TalkableRobot* t, FlyableRobot* f)
        : Robot(w, t, f) {}

    void projection() override {
        cout << "Displaying worker efficiency stats..." << endl;
    }
};

// --- Main Function ---
int main() {
    Robot *robot1 = new CompanionRobot(new NormalWalk(), new NormalTalk(), new NoFly());
    robot1->walk();
    robot1->talk();
    robot1->fly();
    robot1->projection();

    cout << "--------------------" << endl;

    Robot *robot2 = new WorkerRobot(new NoWalk(), new NoTalk(), new NormalFly());
    robot2->walk();
    robot2->talk();
    robot2->fly();
    robot2->projection();

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
class Notification {
    public :
    virtual void send_notification()  = 0;
    virtual ~Notification() = default;
};
class Email : public Notification {
    public :    
    void send_notification() override {
        cout << "sendigni notifications via email\n";
    }
};
class SMS : public Notification{
    public:
    void send_notification()override {
        cout << "sending notifications via SMS\n";
    }
};
class Factory {
    public:
    virtual Notification* provide_message_provider(string &type) = 0;
    virtual ~Factory() = default;
};
class Gmail : public Factory {
    public:
    Notification* provide_message_provider(string &type) override{
        if (type == "mail" ) return new Email();
        else return nullptr;
    }
};
class Contacts : public Factory {

    public:
     Notification* provide_message_provider(string &type) override{
        if (type == "SMS" ) return new SMS();
        else return nullptr;
    }
};
int main()
{
    //main is the client
    string data_type = "mail";
Factory* ft = new Gmail();
Notification* nt = ft->provide_message_provider(data_type);
   if(nt) nt->send_notification();
   else cout <<"provide correct provider\n";
   delete nt;
   delete ft;

}