#include <bits/stdc++.h>
using namespace std;
class Burger {
    public:
   virtual  void prepare_burger() = 0;

    
};
class Bread{
    public :
    virtual void prepare_bread() = 0;
};
class NormalBread :public Bread{
    public :
    void prepare_burger() override {
        cout <<" normal burger preparing" << endl;
    }
}
class Factory{
    virtual Burger* create_burger(string bgtype) = 0;
    virtual Bread* create_bread(string bdtype) = 0;
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
        if (bgtype == "normal") return new WheatNormalBurger();
        else if (bgtype == "standard") return new WheatStandardBurger();
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
        if (data == "normal") return new WheatNormalBread();
        else if (data == "standard") return new WheatStandardBread();
        else throw invalid_argument("error not correct type selected");
        }
        catch(invalid_argument& err)
        {
            cout <<err.what()<<" : error\n";
        }
        return nullptr;

    }


};

int main()
{


}