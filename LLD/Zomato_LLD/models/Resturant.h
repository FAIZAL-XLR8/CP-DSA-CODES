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
    
    void
};
int Resturant :: curr_resturant_id = 0;