#ifndef MENU_ITEM
#define MENU_ITEM
#include <iostream>
#include <string>

using namespace std;

class MenuItem {
private:
    string name;
    static int curr_item_id;
    double price;
    int id;

public:
    MenuItem() {
        this->id = ++curr_item_id;
        this->price = 0.0;
    }

    int getId() { return this->id; }
    string getname() { return this->name; }
    double getPrice() { return this->price; }

    void setPrice(const double &price) {
        this->price = price;
    }

    void setName(const string &name) {
        this->name = name;
    }

    ~MenuItem() {
        cout << "Menu item destructor called\n";
    }
};

int MenuItem::curr_item_id = 0;

#endif // MENU_ITEM