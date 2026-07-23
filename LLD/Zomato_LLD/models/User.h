#ifndef USER_H
#define USER_H

#include <iostream>
#include <string>
#include "Cart.h"

using namespace std;

class User {
private:
    string name;
    string address;
    int id;
    static int curr_user_id;
    Cart* cart;

public:
    User(string name, string address) {
        this->name = name;
        this->address = address;
        cart = new Cart();
        this->id = ++curr_user_id;
    }

    User(int id, string name, string address) {
        this->id = id;
        this->name = name;
        this->address = address;
        cart = new Cart();
    }

    ~User() {
        cout << "User destructor was called\n";
        delete cart;
    }

    string getName() { return name; }
    Cart* getCart() { return cart; }
    int getUserId() { return id; }
    string getAddress() { return address; }

    void setAddress(string address) {
        this->address = address;
    }
};

int User::curr_user_id = 0;

#endif // USER_H