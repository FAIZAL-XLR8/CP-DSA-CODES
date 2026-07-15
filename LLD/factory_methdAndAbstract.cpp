#include <bits/stdc++.h>
using namespace std;
class Burger {
    public:
   virtual  void prepare_burger() = 0;
    virtual ~Burger() {
        cout <<"Burger_desturctor\n";
    };
    
};
class Bread{
    public :
    virtual void prepare_bread() = 0;
    virtual ~Bread() {
        cout <<"Bread_destructor\n";
    }
};
class NormalBread :public Bread{
    public :
    void prepare_bread() override {
        cout <<" normal burger preparing" << endl;
    }
};
class StandardBread : public Bread {
    public :
    void prepare_bread()
    {
        cout <<"preparing stndard bread\n";
    }
};
class NormalBurger : public Burger {
    public :
    void prepare_burger ()
    {
        cout <<"preparing normal burger\n";
    }
};
class StandardBurger : public Burger {
    public :
    void prepare_burger ()
    {
        cout << " preparing standard burger\n";
    }
};
class Factory{
    public :
    virtual Burger* create_burger(string bgtype) = 0;
    virtual Bread* create_bread(string bdtype) = 0;
    virtual ~Factory(){
        cout <<"Factory_destructor\n";
    };
};
class BurgerSingh : public Factory{
    public:
    Burger* create_burger(string bgtype) override{
        
        try{
        cout << "creating burger from Burger Singh\n";
        if (bgtype == "normal") return new NormalBurger();
        else if (bgtype == "standard") return new StandardBurger();
        else throw invalid_argument("error no correct type selected");
        }
        catch (invalid_argument& err)
        {
            cout << "invalid args\n" << err.what() << endl;
        }
        return nullptr;

    }
    Bread* create_bread (string data) override
    {

        try{
        if (data == "normal") return new NormalBread();
        else if (data == "standard") return new StandardBread();
        else throw invalid_argument("error not correct type selected");
        }
        catch(invalid_argument& err)
        {
            cout <<err.what()<<" : error\n";
        }
        return nullptr;

    }

};
class BurgerKing : public Factory{
    public :
    public:
    Burger* create_burger(string bgtype) override{
        
        try{
        cout << "creating burger from Burger Singh\n";
        if (bgtype == "normal") return new NormalBurger();
        else if (bgtype == "standard") return new StandardBurger();
        else throw invalid_argument("error no correct type selected");
        }
        catch (invalid_argument& err)
        {
            cout << "invalid args\n" << err.what() << endl;
        }
        return nullptr;

    }
    Bread* create_bread (string data) override
    {

        try{
        if (data == "normal") return new NormalBread();
        else if (data == "standard") return new StandardBread();
        else throw invalid_argument("error not correct type selected");
        }
        catch(invalid_argument& err)
        {
            cout << err.what() << " : error\n";
        }
        return nullptr;

    }


};

int main()
{
    string data_bread = "normal";
    string data_burger = "standard";
    Factory* fct = new BurgerKing();
    Bread* bd = fct->create_bread(data_bread);
    Burger* bg = fct->create_burger(data_burger);
   if(bg) bg->prepare_burger();
   if(bd) bd->prepare_bread();
   delete fct;
   delete bg;
   delete bd;
}