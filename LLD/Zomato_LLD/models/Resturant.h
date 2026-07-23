#ifndef RESTURANT_H
#define RESTURANT_H

#include <iostream>
#include <string>
#include <vector>
#include "models/MenuItem.h"

using namespace std;

class Resturant {
private:
    static int curr_resturant_id;
public:
    int resturant_id;
    string name;
    string address;
    vector<MenuItem*> menu;

    Resturant(const string& name, const string &address) {
        this->resturant_id = ++curr_resturant_id;
        this->name = name;
        this->address = address;
    }

    ~Resturant() {
        cout << "Resturant destructor called\n";
        menu.clear();
    }

    void addItem(MenuItem* new_item) {
        menu.push_back(new_item);
    }

    string getName() {
        return this->name;
    }

    void setName(const string &name) {
        this->name = name;
    }

    vector<MenuItem*> getMenu() {
        return menu;
    }

    void setLocation(const string &loc) {
        this->address = loc;
    }

    string getLocation() {
        return address;
    }
};

int Resturant::curr_resturant_id = 0;

#endif // RESTURANT_H