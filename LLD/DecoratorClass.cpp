#include<bits/stdc++.h>

using namespace std;
class Character {
    // an interface class
    public :
    virtual string getAbility() = 0;
};
class  Mario : public Character {
    public :
    string getAbility() override {
        return  "Mario base character \n";
    }
};
class Decorator : public Character {
    protected :
    Character* ch; // has a relationship --> hua 
    //to stack up multiple abilities hold a character ptr
    public :
    Decorator(Character* ch){
        this->ch = ch;
    };
    virtual string getAbility() = 0;
    ~Decorator(){
        delete ch;
    }
       
    
};
class HeightUp : public Decorator {
    public :
    HeightUp(Character * ch) : Decorator(ch){};
    string getAbility() override {
        string temp;
     temp = ch->getAbility(); // this executes both if decorator was passed then that object
        //else base class direct descendants of character interface
        //this ensures that both khudka and additional abilities of other decorator gets called
            return temp + " and height increased \n";
    }
};
class StarPower : public Decorator {
    public :
    StarPower(Character* ch) : Decorator(ch){};
    string getAbility() override {
        string temp = ch->getAbility();
            return temp + " and star power is now active \n";
    }
};
class Gunpower : public Decorator{
    public :
    Gunpower(Character* ch) : Decorator(ch){};
    string getAbility() override {
        string temp = ch->getAbility();
            return temp + " and now can throw fireballs \n";
    }
};
int main () {
    Character* ch = new Mario(); // this is direct base class direct subclas of character
    cout << ch->getAbility();
    ch = new HeightUp(ch);
    cout << ch->getAbility();
    ch = new Gunpower(ch);
    cout << ch->getAbility();
    delete ch;

}