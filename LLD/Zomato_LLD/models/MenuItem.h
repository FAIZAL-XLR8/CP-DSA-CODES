#ifndef MENU_ITEM
#define MENU_ITEM
#include <bits/stdc++.h>
using namespace std;
class MenutItem{
    private :
    string name;
    static int curr_item_id;
    double price;
    public :
    MenuItem ()
    {
    }
    int getCode() return this-> curr_item_id;
    string getname() return this-> name;
    double getPrice() return this-> price;
    void setPrice (const double &price)
    {
        this -> price = price;
    }
    void setName (const string &name)
    {
        this -> name = name;
    }
    ~MenuItem()
    {
        cout << "Menu item destructor called\n";
    }
};  
int MenuItem :: curr_item_id = 0;


#endif