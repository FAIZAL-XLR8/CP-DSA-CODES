#include<bits/stdc++.h>
using namespace std;
class Burger{ //abstract class because burger can be of several types
    public:
    virtual void  prepare() = 0;
};

class NormalBurger : public Burger{
    public :
    void prepare() override {
        cout << " preparing noraml burger \n";
    }
};
class StandardBurger : public Burger {
    public :
    void prepare() override {
        cout << " prepare the standard burger \n";
    }
};
class FactoryBurger{ // a factory class who's sole work is to return the correct object of the particular class
    public:

    FactoryBurger()
    {
    }
    Burger* generateBurger(string & type)
    {
        try{
                if (type == "standard") return new StandardBurger();
                else if (type == "normal") return new NormalBurger();
                else throw invalid_argument("not correct type");
        }
        catch (const invalid_argument& err)
        {
            cout << err.what() <<" pls do right \n";
            return '\0';
        }
    }

};
int main()
{
    string request_of_client = "elel";
    FactoryBurger* fb = new FactoryBurger();
    Burger* bg = fb ->generateBurger(request_of_client);
    if(bg)bg->prepare();
    else cout <<"give correct type \n";
}