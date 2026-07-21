#ifndefine  RESTURANT_H
#define RESTURANT_H
#include <bits/stdc++.h>
using namespace std;
class Resturant {
    static int curr_resturant_id;
    public:
    int resturant_id;
    string name;
    string address;
    
    vector<MenutItem*> menu;
    Resturant(const string& name, const strign &address)
    {
        this -> resturant_id = ++curr_resturant_id;
        this -> name = name;
        this -> address = address;
       
    }
    ~Resturant()
    {
        cout <<"Resturant desturctor called\n";
        menu.clear();
    }
    
    void addItem(const MenutItem* new_item)
    {
        menu.push_back(new_item);
    }
    void getName()
    {
        return this -> name;
    }
    void setName(const string &name)
    {
        this -> name = name;
    }
    vector<MenutItem*> getMenu()
    {
        return menu;
    }
    void setLocation(const &string loc)
    {
        this -> location = loc;
    }
    void getLocation()
    {
        return address;
    }
};
int Resturant :: curr_resturant_id = 0;
#endif